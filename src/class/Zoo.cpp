#include "Zoo.h"

Zoo::Zoo(int n) : maxCell(n) {
	cell_ = vector< vector<Cell*> >(maxCell,vector<Cell*>(maxCell));
 	for(int i = 0; i<maxCell; i++) {
		for(int j = 0; j<maxCell; j++) {
			cell_[i][j] = new Road(i,j,"Road",nullptr,-1,"Road");			
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
	for (int j = 0; j < Z.maxCell; ++j) {
		for (int i = 0; i < Z.maxCell; ++i) {
			if (Z.cell_[i][j]->getAnimalPtr() != nullptr) {
				Animal *A = Z.cell_[i][j]->getAnimalPtr();
				char c = A->GetSymbol();
				cout << c; //print dari * ke os blm tentu bisa
			} else {
				os << *Z.cell_[i][j]; 
			}
		}
		os << endl;
	}
	return os;
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
	//cout << i << j << cell_[i][j]->getAnimalPtr()->getName() << endl;
	animal_.push_back(&A);
	//cout << animal_[animal_.size()-1]->getLocX() << animal_[animal_.size()-1]->getLocY() << endl;
}

Animal* Zoo::GetAnimal(int x, int y){
	int i = 0;
	while(i < animal_.size()-1 && animal_[i]->getLocY() != y && animal_[i]->getLocX() != x){
		i++;
	}
	if(animal_[i]->getLocY() == y && animal_[i]->getLocX() == x){
		return animal_[i];
	} else {
		return nullptr;
	}
}

void Zoo::update()
{
	bool up = false;
	bool down = false;
	bool right = false;
	bool left = false;
	for (int i = 0; i < animal_.size(); ++i)
	{
		int upper_x = animal_[i]->getLocX();
		int upper_y = animal_[i]->getLocY()-1;
		int lower_x = animal_[i]->getLocX();
		int lower_y = animal_[i]->getLocY()+1;
		int right_x = animal_[i]->getLocX()+1;
		int right_y = animal_[i]->getLocY();
		int left_x = animal_[i]->getLocX()-1;
		int left_y = animal_[i]->getLocY();
		//cout << lower_x << lower_y << endl;

		if(upper_y > 0){
			if(cell_[upper_x][upper_y]->getCellType().find(animal_[i]->getHabitat()) != string::npos 
				&& cell_[upper_x][upper_y]->getAnimalPtr() == nullptr
				&& cell_[upper_x][upper_y]->GetCageId() == 
				   cell_[animal_[i]->getLocX()][animal_[i]->getLocY()]->GetCageId()
				) 
			{
				up = true;
			} else {
				up = false;
			}
		} else {
			upper_y = 0;
			up = false;
		}	
		//cout << cell_[lower_x][lower_y]->getCellType() << ' ' << animal_[i]->getHabitat() << endl;
		if(lower_y < maxCell-1) {
			if(cell_[lower_x][lower_y]->getCellType().find(animal_[i]->getHabitat()) != string::npos
				&& cell_[lower_x][lower_y]->getAnimalPtr() == nullptr
				&& cell_[lower_x][lower_y]->GetCageId() == 
				   cell_[animal_[i]->getLocX()][animal_[i]->getLocY()]->GetCageId()
				) 
			{
				down = true;
			} else {
				down = false;
			}
		} else {
			lower_y = maxCell-1;
			down = false;
		}
		//cout << "harusnya true yg down " << down << endl;
		if(right_x < maxCell-1){
			if(cell_[right_x][right_y]->getCellType().find(animal_[i]->getHabitat()) != string::npos
				&& cell_[right_x][right_y]->getAnimalPtr() == nullptr
				&& cell_[right_x][right_y]->GetCageId() == 
				   cell_[animal_[i]->getLocX()][animal_[i]->getLocY()]->GetCageId()
				)
			{
				right = true;
			} else {
				right = false;
			}
		} else {
			right_x = maxCell-1;
			right = false;
		}
		if(left_x > 0){
			if(cell_[left_x][left_y]->getCellType().find(animal_[i]->getHabitat()) != string::npos
				&& cell_[left_x][left_y]->getAnimalPtr() == nullptr
				&& cell_[left_x][left_y]->GetCageId() == 
				   cell_[animal_[i]->getLocX()][animal_[i]->getLocY()]->GetCageId()
				)
			{
				left = true;
			} else {
				left = false;
			}
		} else {
			left_x = 0;
			left =false;
		}
		//if(i = 102) {
			//cout << left_x << " " << left_y << " " << right_x << " " << right_y << endl;
			//cout << i << '=' << up << down << right << left << endl;
		
		
		int mov = animal_[i]->move(up,down,right,left);
		//cout << mov << endl;
		if(mov == 0) {
			animal_[i]->SetY(animal_[i]->getLocY() - 1);
			cell_[upper_x][upper_y]->setAnimalPtr(animal_[i]);
			cell_[upper_x][upper_y+1]->setAnimalPtr(nullptr);
			//cout << "hsl swap = " << cell_[upper_x][upper_y]->getAnimalPtr() << endl;
		} else if(mov == 1) {
			animal_[i]->SetY(animal_[i]->getLocY() + 1);
			cell_[lower_x][lower_y]->setAnimalPtr(animal_[i]);
			cell_[lower_x][lower_y-1]->setAnimalPtr(nullptr);
			//cout << "hsl swap = " << cell_[lower_x][lower_y]->getAnimalPtr() << endl;
		} else if (mov == 2) {
			animal_[i]->SetX(animal_[i]->getLocX() + 1);
			cell_[right_x][right_y]->setAnimalPtr(animal_[i]);
			cell_[right_x-1][right_y]->setAnimalPtr(nullptr);
			//cout << "hsl swap = " << cell_[right_x][right_y]->getAnimalPtr() << endl;
		} else if (mov == 3){
			animal_[i]->SetX(animal_[i]->getLocX() - 1);
			cell_[left_x][left_y]->setAnimalPtr(animal_[i]);
			cell_[left_x+1][left_y]->setAnimalPtr(nullptr);
			//cout << "hsl swap = " << cell_[left_x][left_y]->getAnimalPtr() << endl;
		} else {
			//cout << "do nothing" << endl;
		}
		
		
	}


	//TODO iterasi ke setiap animal
	//cek apakah habitat di kiri kanan atas bawah bisa
	//kirim boolean
	//geser pointer
}
