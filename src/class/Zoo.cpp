#include "Zoo.h"

Zoo::Zoo(int n, string filePath) : maxCell(n) {
	cell_ = vector<vector<Cell*>>(maxCell,vector<Cell*>(maxCell));
 	for(int i = 0; i<maxCell; i++) {
		for(int j = 0; j<maxCell; j++) {
			cell_[i][j] = new Cell(i,j,"");			
		}	
	 }	
}

Zoo::Zoo(const Zoo& Z) : maxCell(Z.maxCell) {
	cell_ = vector<vector<Cell*>>(maxCell,vector<Cell*>(maxCell));
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

vector< vector<Cell*>>& Zoo::getAllCell() {
	return cell_;
}

int Zoo::getMaxCell() const {
	return maxCell;
}

void setCell(int i,int j,const Animal& A) {
	//cell_[i][j] = new Habitat();
}

void setCell(int i,int j,const Cell& C) {

}