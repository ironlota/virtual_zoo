#include "Zoo.h"

Zoo::Zoo(int n) : maxCell(n) {
	cell = new Cell* [maxCell];
 	for(int i = 0; i<maxCell; i++) {
			cell[i] = new Cell [maxCell];
	}	

	 int maxAnimal = 0.3 * maxCell * maxCell;
	 animal = new Animal [maxAnimal];	
	 for(int i = 0; i < maxAnimal; i++){
	 	animal[i].SetSymbol('\0');
	 }
}

Zoo::Zoo(const Zoo& Z) : maxCell(Z.maxCell) {
	cell = new Cell* [maxCell];
 	for(int i = 0; i<maxCell; i++) {
		cell[i] = new Cell [maxCell];
	}	

	 int maxAnimal = 0.3 * maxCell * maxCell;
	 animal = new Animal [maxAnimal];	

	 for(int i = 0; i < maxCell; i++) {
	 	for(int j = 0; j < maxCell; j++) {
	 		cell[i][j] = Z.cell[i][j];
	 	}	 	
	 }

	 for(int i = 0; i < maxAnimal; i ++) {
	 	animal[i] = Z.animal[i];
	 }
}

Zoo::~Zoo() {
    for(int i = 0; i < maxCell; i++) {
		delete [] cell[i];
	}
	delete [] cell;
}

Zoo& Zoo::operator=(const Zoo& Z) {
	if(this != &Z){
	cell = new Cell* [maxCell];
	 	for(int i = 0; i<maxCell; i++) {
			cell[i] = new Cell [maxCell];
		}	

		 int maxAnimal = 0.3 * maxCell * maxCell;
		 animal = new Animal [maxAnimal];	

		 for(int i = 0; i < maxCell; i++) {
		 	for(int j = 0; j < maxCell; j++) {
		 		cell[i][j] = Z.cell[i][j];
		 	}	 	
		 }

		 for(int i = 0; i < maxAnimal; i ++) {
		 	animal[i] = Z.animal[i];
		 }
	}
	return *this;
}

ostream& operator<<(ostream& os, const Zoo& Z) {
	for (int j = 0; j < Z.maxCell; ++j) {
		for (int i = 0; i < Z.maxCell; ++i) {
			if (Z.cell[i][j].getAnimalPtr() != nullptr) {
				Animal *A = Z.cell[i][j].getAnimalPtr();
				cout << A->GetSymbol(); //print dari * ke os blm tentu bisa
			} else {
				os << Z.cell[i][j]; 
			}

			if (i == Z.maxCell - 1) {
				if (j == 0) {
					os << "\t\t\t\t\tLEGENDA ";
				}
				if (j == 1) {
					os << "\t\t Facility :";
				}
				if (j == 2) {
					os << "\t\t Road = ' '\t\t\t\t Entrance/Exit = _";
				}
				if (j == 3) {
					os << "\t\t Restaurant = R\t\t\t\t Park = P";
				}
				if (j == 4) {
					os << "\t\t Land = x\t\t\t\t Water = ~";
				}
				if (j == 5) {
					os << "\t\t Flying = O";
				}
				if (j == 7) {
					os << "\t\t Animal :";
				}
				if (j == 8) {
					os << "\t\t AfricanFrog = a\t\t\t Caecilia = c";
				}
				if (j == 9) {
					os << "\t\t Exolotl = e\t\t\t\t FlyingFish = y";
				}
				if (j == 10) {
					os << "\t\t Ostrich = i\t\t\t\t Salamander = r";
				}
				if (j == 11) {
					os << "\t\t BirdOfParadise = b\t\t\t Eagle = e";
				}
				if (j == 12) {
					os << "\t\t Hawk = k\t\t\t\t Owl = o";
				}
				if (j == 13) {
					os << "\t\t Peacock = p\t\t\t\t Bear = b";
				}
				if (j == 14) {
					os << "\t\t Deer = d\t\t\t\t Elephant = n";
				}
				if (j == 15) {
					os << "\t\t Girrafe = g\t\t\t\t Lion = l";
				}
				if (j == 16) {
					os << "\t\t Tiger = t\t\t\t\t Mantaray = m";
				}
				if (j == 17) {
					os << "\t\t Piranha = p\t\t\t\t Seahorse = h";
				}
				if (j == 18) {
					os << "\t\t Shark = s\t\t\t\t Starfish = f";
				}
			}
		}
		os << endl;
	}
	return os;
}

Cell Zoo::GetCell(int i, int j) {
	return cell[i][j];
}

Cell** Zoo::GetAllCell() {
	return cell;
}

int Zoo::GetMaxCell() const {
	return maxCell;
}

void Zoo::SetCell(int i,int j, Cell& C) {
	cell[i][j] = C;
}

void Zoo::SetAnimal(int i, int j, Animal* A) {
	cell[i][j].setAnimalPtr(A);
}

Animal* Zoo::GetAnimal(int x, int y){
	return cell[x][y].getAnimalPtr();
}

void Zoo::update()
{/*
	bool up = false;
	bool down = false;
	bool right = false;
	bool left = false;
	for (int i = 0; i < animal.size(); ++i)
	{
		int upper_x = animal[i]->getLocX();
		int upper_y = animal[i]->getLocY()-1;
		int lower_x = animal[i]->getLocX();
		int lower_y = animal[i]->getLocY()+1;
		int right_x = animal[i]->getLocX()+1;
		int right_y = animal[i]->getLocY();
		int left_x = animal[i]->getLocX()-1;
		int left_y = animal[i]->getLocY();
		//cout << lower_x << lower_y << endl;

		if(upper_y > 0){
			if(cell[upper_x][upper_y]->getCellType().find(animal[i]->getHabitat()) != string::npos 
				&& cell[upper_x][upper_y]->getAnimalPtr() == nullptr
				&& cell[upper_x][upper_y]->GetCageId() == 
				   cell[animal[i]->getLocX()][animal[i]->getLocY()]->GetCageId()
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
		//cout << cell[lower_x][lower_y]->getCellType() << ' ' << animal[i]->getHabitat() << endl;
		if(lower_y < maxCell-1) {
			if(cell[lower_x][lower_y]->getCellType().find(animal[i]->getHabitat()) != string::npos
				&& cell[lower_x][lower_y]->getAnimalPtr() == nullptr
				&& cell[lower_x][lower_y]->GetCageId() == 
				   cell[animal[i]->getLocX()][animal[i]->getLocY()]->GetCageId()
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
			if(cell[right_x][right_y]->getCellType().find(animal[i]->getHabitat()) != string::npos
				&& cell[right_x][right_y]->getAnimalPtr() == nullptr
				&& cell[right_x][right_y]->GetCageId() == 
				   cell[animal[i]->getLocX()][animal[i]->getLocY()]->GetCageId()
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
			if(cell[left_x][left_y]->getCellType().find(animal[i]->getHabitat()) != string::npos
				&& cell[left_x][left_y]->getAnimalPtr() == nullptr
				&& cell[left_x][left_y]->GetCageId() == 
				   cell[animal[i]->getLocX()][animal[i]->getLocY()]->GetCageId()
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
		
		
		int mov = animal[i]->move(up,down,right,left);
		//cout << mov << endl;
		if(mov == 0) {
			animal[i]->SetY(animal[i]->getLocY() - 1);
			cell[upper_x][upper_y]->setAnimalPtr(animal[i]);
			cell[upper_x][upper_y+1]->setAnimalPtr(nullptr);
			//cout << "hsl swap = " << cell[upper_x][upper_y]->getAnimalPtr() << endl;
		} else if(mov == 1) {
			animal[i]->SetY(animal[i]->getLocY() + 1);
			cell[lower_x][lower_y]->setAnimalPtr(animal[i]);
			cell[lower_x][lower_y-1]->setAnimalPtr(nullptr);
			//cout << "hsl swap = " << cell[lower_x][lower_y]->getAnimalPtr() << endl;
		} else if (mov == 2) {
			animal[i]->SetX(animal[i]->getLocX() + 1);
			cell[right_x][right_y]->setAnimalPtr(animal[i]);
			cell[right_y-1][right_y]->setAnimalPtr(nullptr);
			//cout << "hsl swap = " << cell[right_x][right_y]->getAnimalPtr() << endl;
		} else if (mov == 3){
			animal[i]->SetX(animal[i]->getLocX() - 1);
			cell[left_x][left_y]->setAnimalPtr(animal[i]);
			cell[left_x+1][left_y]->setAnimalPtr(nullptr);
			//cout << "hsl swap = " << cell[left_x][left_y]->getAnimalPtr() << endl;
		} else {
			//cout << "do nothing" << endl;
		}
		
		
	}


	//TODO iterasi ke setiap animal
	//cek apakah habitat di kiri kanan atas bawah bisa
	//kirim boolean
	//geser pointer*/
}
