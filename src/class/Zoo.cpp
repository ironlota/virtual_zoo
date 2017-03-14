#include "Zoo.h"

Zoo::Zoo(int n) : maxCell(n) {
	cell_ = vector< vector<Cell*> >(maxCell,vector<Cell*>(maxCell));
 	for(int i = 0; i<maxCell; i++) {
		for(int j = 0; j<maxCell; j++) {
			if(i==maxCell-1 || j==maxCell-1) {
				cell_[i][j] = new Road(i,j,"Road",nullptr,-1,"RoadExit");
			} else {
				cell_[i][j] = new Road(i,j,"Road",nullptr,-1,"Road");
			}
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
				os << c; //print dari * ke os blm tentu bisa
			} else {
				os << *Z.cell_[i][j]; 
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
	int i = A.GetLocX();
	int j = A.GetLocY();
	cell_[i][j]->setAnimalPtr(&A);
	//cout << i << j << cell_[i][j]->getAnimalPtr()->getName() << endl;
	animal_.push_back(&A);
	//cout << animal_[animal_.size()-1]->GetLocX() << animal_[animal_.size()-1]->GetLocY() << endl;
}

Animal* Zoo::GetAnimal(int x, int y){
	int i = 0;
	while(i < animal_.size()-1 && animal_[i]->GetLocY() != y && animal_[i]->GetLocX() != x){
		i++;
	}
	if(animal_[i]->GetLocY() == y && animal_[i]->GetLocX() == x){
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
		int upper_x = animal_[i]->GetLocX();
		int upper_y = animal_[i]->GetLocY()-1;
		int lower_x = animal_[i]->GetLocX();
		int lower_y = animal_[i]->GetLocY()+1;
		int right_x = animal_[i]->GetLocX()+1;
		int right_y = animal_[i]->GetLocY();
		int left_x = animal_[i]->GetLocX()-1;
		int left_y = animal_[i]->GetLocY();
		//cout << lower_x << lower_y << endl;

		if(upper_y > 0){
			if(cell_[upper_x][upper_y]->getCellType().find(animal_[i]->GetHabitat()) != string::npos 
				&& cell_[upper_x][upper_y]->getAnimalPtr() == nullptr
				&& cell_[upper_x][upper_y]->GetCageId() == 
				   cell_[animal_[i]->GetLocX()][animal_[i]->GetLocY()]->GetCageId()
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
		//cout << cell_[lower_x][lower_y]->getCellType() << ' ' << animal_[i]->GetHabitat() << endl;
		if(lower_y < maxCell-1) {
			if(cell_[lower_x][lower_y]->getCellType().find(animal_[i]->GetHabitat()) != string::npos
				&& cell_[lower_x][lower_y]->getAnimalPtr() == nullptr
				&& cell_[lower_x][lower_y]->GetCageId() == 
				   cell_[animal_[i]->GetLocX()][animal_[i]->GetLocY()]->GetCageId()
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
			if(cell_[right_x][right_y]->getCellType().find(animal_[i]->GetHabitat()) != string::npos
				&& cell_[right_x][right_y]->getAnimalPtr() == nullptr
				&& cell_[right_x][right_y]->GetCageId() == 
				   cell_[animal_[i]->GetLocX()][animal_[i]->GetLocY()]->GetCageId()
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
			if(cell_[left_x][left_y]->getCellType().find(animal_[i]->GetHabitat()) != string::npos
				&& cell_[left_x][left_y]->getAnimalPtr() == nullptr
				&& cell_[left_x][left_y]->GetCageId() == 
				   cell_[animal_[i]->GetLocX()][animal_[i]->GetLocY()]->GetCageId()
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
		
		
		int mov = animal_[i]->Move(up,down,right,left);
		//cout << mov << endl;
		if(mov == 0) {
			animal_[i]->SetY(animal_[i]->GetLocY() - 1);
			cell_[upper_x][upper_y]->setAnimalPtr(animal_[i]);
			cell_[upper_x][upper_y+1]->setAnimalPtr(nullptr);
			//cout << "hsl swap = " << cell_[upper_x][upper_y]->getAnimalPtr() << endl;
		} else if(mov == 1) {
			animal_[i]->SetY(animal_[i]->GetLocY() + 1);
			cell_[lower_x][lower_y]->setAnimalPtr(animal_[i]);
			cell_[lower_x][lower_y-1]->setAnimalPtr(nullptr);
			//cout << "hsl swap = " << cell_[lower_x][lower_y]->getAnimalPtr() << endl;
		} else if (mov == 2) {
			animal_[i]->SetX(animal_[i]->GetLocX() + 1);
			cell_[right_x][right_y]->setAnimalPtr(animal_[i]);
			cell_[right_x-1][right_y]->setAnimalPtr(nullptr);
			//cout << "hsl swap = " << cell_[right_x][right_y]->getAnimalPtr() << endl;
		} else if (mov == 3){
			animal_[i]->SetX(animal_[i]->GetLocX() - 1);
			cell_[left_x][left_y]->setAnimalPtr(animal_[i]);
			cell_[left_x+1][left_y]->setAnimalPtr(nullptr);
			//cout << "hsl swap = " << cell_[left_x][left_y]->getAnimalPtr() << endl;
		} else {
			//cout << "do nothing" << endl;
		}	
	}
}

void Zoo::Tour(int en_x, int en_y) {
	//orang adalah @
	int x_orang = en_x; //cout << x_orang << ex_x << endl;
	int y_orang = en_y; //cout << y_orang << ex_y << endl;
	bool visited [maxCell][maxCell];
	for(int i = 0; i < maxCell; i++){
		for(int j = 0; j < maxCell; j++){
			visited[i][j] = false;
		}
	}

	while(cell_[x_orang][y_orang]->GetName().compare("RoadExit") != 0){
		for (int j = 0; j < maxCell; ++j) {
			for (int i = 0; i < maxCell; ++i) {
				if(x_orang == i && y_orang == j){
					cout << '@';
				} else if (cell_[i][j]->getAnimalPtr() != nullptr) {
					Animal *A = cell_[i][j]->getAnimalPtr();
					char c = A->GetSymbol();
					cout << c;
				} else {
					cout << *cell_[i][j]; 
				}
				if (i == maxCell - 1) {
					if (j == 0) {
						cout << "\t\t\t\t\tLEGENDA ";
					}
					if (j == 1) {
						cout << "\t\t Facility :";
					}
					if (j == 2) {
						cout << "\t\t Road = ' '\t\t\t\t Entrance/Exit = _";
					}
					if (j == 3) {
						cout << "\t\t Restaurant = R\t\t\t\t Park = P";
					}
					if (j == 4) {
						cout << "\t\t Land = x\t\t\t\t Water = ~";
					}
					if (j == 5) {
						cout << "\t\t Flying = O";
					}
					if (j == 7) {
						cout << "\t\t Animal :";
					}
					if (j == 8) {
						cout << "\t\t AfricanFrog = a\t\t\t Caecilia = c";
					}
					if (j == 9) {
						cout << "\t\t Exolotl = e\t\t\t\t FlyingFish = y";
					}
					if (j == 10) {
						cout << "\t\t Ostrich = i\t\t\t\t Salamander = r";
					}
					if (j == 11) {
						cout << "\t\t BirdOfParadise = b\t\t\t Eagle = e";
					}
					if (j == 12) {
						cout << "\t\t Hawk = k\t\t\t\t Owl = o";
					}
					if (j == 13) {
						cout << "\t\t Peacock = p\t\t\t\t Bear = b";
					}
					if (j == 14) {
						cout << "\t\t Deer = d\t\t\t\t Elephant = n";
					}
					if (j == 15) {
						cout << "\t\t Girrafe = g\t\t\t\t Lion = l";
					}
					if (j == 16) {
						cout << "\t\t Tiger = t\t\t\t\t Mantaray = m";
					}
					if (j == 17) {
						cout << "\t\t Piranha = p\t\t\t\t Seahorse = h";
					}
					if (j == 18) {
						cout << "\t\t Shark = s\t\t\t\t Starfish = f";
					}
					if (j == 19) {
						cout << "\t\t This is You = @";
					}
				}
			}
			cout << endl;
		}
		visited[x_orang][y_orang] = true;
		if(cell_[x_orang][y_orang+1]->getCellType().compare("Road") == 0 && !visited[x_orang][y_orang+1]) {
			y_orang++;
		} else if (cell_[x_orang+1][y_orang]->getCellType().compare("Road") == 0 && !visited[x_orang+1][y_orang]){
			x_orang++;
		} else if (cell_[x_orang-1][y_orang]->getCellType().compare("Road") == 0 && !visited[x_orang-1][y_orang]){
			x_orang--;
		} else if (cell_[x_orang][y_orang-1]->getCellType().compare("Road") == 0 && !visited[x_orang][y_orang-1]){
			y_orang--;
		} else {
			break;
		}
		clearwait(1);
	}

	//untuk cout terakhir
	for (int j = 0; j < maxCell; ++j) {
		for (int i = 0; i < maxCell; ++i) {
			if(x_orang == i && y_orang == j){
				cout << '@';
			} else if (cell_[i][j]->getAnimalPtr() != nullptr) {
				Animal *A = cell_[i][j]->getAnimalPtr();
				char c = A->GetSymbol();
				cout << c;
			} else {
				cout << *cell_[i][j]; 
			}
			if (i == maxCell - 1) {
				if (j == 0) {
					cout << "\t\t\t\t\tLEGENDA ";
				}
				if (j == 1) {
					cout << "\t\t Facility :";
				}
				if (j == 2) {
					cout << "\t\t Road = ' '\t\t\t\t Entrance/Exit = _";
				}
				if (j == 3) {
					cout << "\t\t Restaurant = R\t\t\t\t Park = P";
				}
				if (j == 4) {
					cout << "\t\t Land = x\t\t\t\t Water = ~";
				}
				if (j == 5) {
					cout << "\t\t Flying = O";
				}
				if (j == 7) {
					cout << "\t\t Animal :";
				}
				if (j == 8) {
					cout << "\t\t AfricanFrog = a\t\t\t Caecilia = c";
				}
				if (j == 9) {
					cout << "\t\t Exolotl = e\t\t\t\t FlyingFish = y";
				}
				if (j == 10) {
					cout << "\t\t Ostrich = i\t\t\t\t Salamander = r";
				}
				if (j == 11) {
					cout << "\t\t BirdOfParadise = b\t\t\t Eagle = e";
				}
				if (j == 12) {
					cout << "\t\t Hawk = k\t\t\t\t Owl = o";
				}
				if (j == 13) {
					cout << "\t\t Peacock = p\t\t\t\t Bear = b";
				}
				if (j == 14) {
					cout << "\t\t Deer = d\t\t\t\t Elephant = n";
				}
				if (j == 15) {
					cout << "\t\t Girrafe = g\t\t\t\t Lion = l";
				}
				if (j == 16) {
					cout << "\t\t Tiger = t\t\t\t\t Mantaray = m";
				}
				if (j == 17) {
					cout << "\t\t Piranha = p\t\t\t\t Seahorse = h";
				}
				if (j == 18) {
					cout << "\t\t Shark = s\t\t\t\t Starfish = f";
				}
				if (j == 19) {
					cout << "\t\t This is You = @";
				}
			}
		}
		cout << endl;
	}
	cout << "Tour Selesai" << endl;
}

void Zoo::AddAnimal(Animal& A) {
	bool okay = false;
	int i = 0;
	while(!okay && i < animal_.size()) {
		//cout << (animal_[i]->GetTamed() == A.GetTamed()) << endl;
		if (animal_[i]->GetTamed() == A.GetTamed() && animal_[i]->GetHabitat().compare(A.GetHabitat()) == 0 ) {
			int tempcage = cell_[animal_[i]->GetLocX()][animal_[i]->GetLocY()]->GetCageId();
			int countcage = 0;
			int countanimal = 0;
			for(int j = 0; j < maxCell; ++j){
				for(int k = 0; k < maxCell; ++k){
					if(cell_[k][j]->GetCageId() == tempcage){
						countcage++;
						if(cell_[k][j]->getAnimalPtr() != nullptr) { countanimal++; }
					}
				}
			}
			
			cout << "ini id cage " << tempcage << " ini count animal = " << countanimal << endl;
			if(countanimal < countcage*0.3){
				int j = 0; int k;
				while(j < maxCell && !okay){
					k = 0;
					while(k < maxCell && !okay){
						if(cell_[k][j]->GetCageId() == tempcage){
							A.SetX(j);
							A.SetY(k);
							animal_.push_back(&A);
							cell_[k][j]->setAnimalPtr(&A);
							okay = true;
						}
						k++;
					}
					j++;
				}
			}
		}
		i++;
	}
}