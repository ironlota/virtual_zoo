#include "Zoo.h"

Zoo::Zoo(int n) : maxCell(n) {
	cell_ = vector< vector<Cell*> >(maxCell,vector<Cell*>(maxCell));
 	for(int i = 0; i<maxCell; i++) {
		for(int j = 0; j<maxCell; j++) {
			cell_[i][j] = new Cell(i,j,"");			
		}	
	 }	
}

Zoo::Zoo(const Zoo& Z) : maxCell(Z.maxCell) {
	cell_ = vector< vector<Cell*> >(maxCell,vector<Cell*>(maxCell));
 	for(int i = 0; i<maxCell; i++) {
		for(int j = 0; j<maxCell; j++) {
			*cell_[i][j] = *Z.cell_[i][j];				
		}	
	 }	
}

Zoo::~Zoo() {
    for(int i = 0; i < maxCell; i++) {
		cell_[i].clear();
	}
	cell_.clear();
}

Zoo& Zoo::operator=(const Zoo& Z) {
	for(int i = 0; i < maxCell; i++) {
		cell_[i].clear();
	}
	cell_.clear();

 	for(int i = 0; i<maxCell; i++) {
		for(int j = 0; j<maxCell; j++) {
			*cell_[i][j] = *Z.cell_[i][j];		
		}	
	 }	
}

ostream& operator<<(ostream& os, const Zoo& Z) {
	for(int i = 0; i < Z.cell_.size(); i++) {
		for(int j = 0; j < Z.cell_.size(); j++) {
			if(i==Z.cell_.size() - 1)
				cout << *Z.cell_[i][j] << endl;
			else
				cout << *Z.cell_[i][j];
		}
	}
}

Cell* Zoo::getCell(int i, int j) {
	return cell_[i][j];
}

vector<  vector<Cell*> >& Zoo::getAllCell() {
	return cell_;
}

int Zoo::getMaxCell() const {
	return maxCell;
}

void Zoo::setCell(int i,int j, Cell& C) {
	cell_[i][j] = &C;
}

void Zoo::SetAnimal(Animal& A) {
	int i = A.getLocX();
	int j = A.getLocY();
	cell_[i][j]->setAnimalPtr(&A);
	animal_.push_back(&A);
}

void Zoo::update()
{
	bool up, down, right, left;
	for (int i = 0; i < animal_.size(); ++i)
	{
		if(cell_[animal_[i]->getLocX()][animal_[i]->getLocY()-1]->getCellType() == animal_[i]->getHabitat()
			&& cell_[animal_[i]->getLocX()][animal_[i]->getLocY()-1]->getAnimalPtr() == nullptr
			&& cell_[animal_[i]->getLocX()][animal_[i]->getLocY()-1]->GetCageId() == 
			   cell_[animal_[i]->getLocX()][animal_[i]->getLocY()]->GetCageId()
			) 
		{
			up = true;
		} else {
			up = false;
		}
		if(cell_[animal_[i]->getLocX()][animal_[i]->getLocY()+1]->getCellType() == animal_[i]->getHabitat()
			&& cell_[animal_[i]->getLocX()][animal_[i]->getLocY()+1]->getAnimalPtr() == nullptr
			&& cell_[animal_[i]->getLocX()][animal_[i]->getLocY()+1]->GetCageId() == 
			   cell_[animal_[i]->getLocX()][animal_[i]->getLocY()]->GetCageId()
			) 
		{
			down = true;
		} else {
			down = false;
		}
		if(cell_[animal_[i]->getLocX()+1][animal_[i]->getLocY()]->getCellType() == animal_[i]->getHabitat()
			&& cell_[animal_[i]->getLocX()+1][animal_[i]->getLocY()]->getAnimalPtr() == nullptr
			&& cell_[animal_[i]->getLocX()+1][animal_[i]->getLocY()]->GetCageId() == 
			   cell_[animal_[i]->getLocX()][animal_[i]->getLocY()]->GetCageId()
			)
		{
			right = true;
		} else {
			right = false;
		}
		if(cell_[animal_[i]->getLocX()-1][animal_[i]->getLocY()]->getCellType() == animal_[i]->getHabitat()
			&& cell_[animal_[i]->getLocX()-1][animal_[i]->getLocY()]->getAnimalPtr() == nullptr
			&& cell_[animal_[i]->getLocX()-1][animal_[i]->getLocY()]->GetCageId() == 
			   cell_[animal_[i]->getLocX()][animal_[i]->getLocY()]->GetCageId()
			)
		{
			left = true;
		} else {
			left = false;
		}
		
		int mov = animal_[i]->move(up,down,right,left);
		Animal* temp;

		//Swap pointer animal
		switch(mov){
			case 0: {
				temp = cell_[animal_[i]->getLocX()][animal_[i]->getLocY()-1]->getAnimalPtr();
				cell_[animal_[i]->getLocX()][animal_[i]->getLocY()]->setAnimalPtr(temp);
				cell_[animal_[i]->getLocX()][animal_[i]->getLocY()-1]->setAnimalPtr(temp);
				break;
			}
			case 1: {
				temp = cell_[animal_[i]->getLocX()][animal_[i]->getLocY()+1]->getAnimalPtr();
				cell_[animal_[i]->getLocX()][animal_[i]->getLocY()]->setAnimalPtr(temp);
				cell_[animal_[i]->getLocX()][animal_[i]->getLocY()+1]->setAnimalPtr(temp);
				break;
			}
			case 2: {
				temp = cell_[animal_[i]->getLocX()+1][animal_[i]->getLocY()]->getAnimalPtr();
				cell_[animal_[i]->getLocX()][animal_[i]->getLocY()]->setAnimalPtr(temp);
				cell_[animal_[i]->getLocX()+1][animal_[i]->getLocY()]->setAnimalPtr(temp);
				break;
			}
			case 3: {
				temp = cell_[animal_[i]->getLocX()-1][animal_[i]->getLocY()]->getAnimalPtr();
				cell_[animal_[i]->getLocX()][animal_[i]->getLocY()]->setAnimalPtr(temp);
				cell_[animal_[i]->getLocX()-1][animal_[i]->getLocY()]->setAnimalPtr(temp);
				break;
			}
		}
		
	}


	//TODO iterasi ke setiap animal
	//cek apakah habitat di kiri kanan atas bawah bisa
	//kirim boolean
	//geser pointer
}
