#include "ConfigStore.h"

int ConfigStore::ParseFile(std::ifstream& inStream, int n) {
    // Always check after opening to make sure the
    // file existed and was opened successfully.
    //
    if (!inStream.is_open())
    {
        std::cerr << "Failed to open file!\n";
        return -1;
    }

    // Since this is a read-only variable,
    // also mark is as `const` to make intentions
    // clear to the readers.
    //
    const string ANIMAL = "[Animal]";
    const string ENDANIMAL = "[END OF Animal]";
    const string CAGE = "[Cage]";
    const string ENDCAGE = "[END OF Cage]";
    const string FACILITY = "[Facility]";
    const string ENDFACILITY = "[END OF Facility]";

    vector<string> cage_str;
    vector<string> animal_str;
    vector<string> facility_str;
    // Main reading loop:
    //
    string lines;
    string lineCage;
    while (std::getline(inStream, lines))
    {   
        if (!inStream.eof()) {
            if (lines.find(CAGE) != std::string::npos)
            {
                while (std::getline(inStream, lineCage) && !(lineCage.find(ENDCAGE) != std::string::npos)) {   
                if (lineCage.empty()) continue;
                else cage_str.push_back(lineCage);
                }
            }
            if (lines.find(ANIMAL) != std::string::npos) {
                while (std::getline(inStream, lineCage) && !(lineCage.find(ENDANIMAL) != std::string::npos)) {
                if (lineCage.empty()) continue;
                else animal_str.push_back(lineCage);
                }
            }
            if (lines.find(FACILITY) != std::string::npos) {
                while (std::getline(inStream, lineCage) && !(lineCage.find(ENDFACILITY) != std::string::npos)) {
                    if (lineCage.empty()) continue;
                    else facility_str.push_back(lineCage);
                }
            }    
        }
    }

    for(int i = 0; i< cage_str.size(); i++) {
        vector<string> x = splits_(cage_str[i],',');
        if(stoi(x[0]) < n && stoi(x[1]) < n) {
            cage_temp * temp = new cage_temp(stoi(x[1]), stoi(x[0]), stoi(x[2]), x[3]);
            x.clear();
            cageVec.push_back(*temp);
        }
    }

    for(int i=0; i<cageVec.size(); i++) {
            Habitat * habitat = nullptr;
            if(cageVec[i].habitat.compare("LandHabitat") == 0) {
                habitat = new LandHabitat(cageVec[i].x,cageVec[i].y,cageVec[i].habitat,nullptr,cageVec[i].id);
            } else if(cageVec[i].habitat.compare("WaterHabitat") == 0) {
                habitat = new WaterHabitat(cageVec[i].x,cageVec[i].y,cageVec[i].habitat,nullptr,cageVec[i].id);
            } else if(cageVec[i].habitat.compare("FlyingHabitat") == 0) {
                habitat = new FlyingHabitat(cageVec[i].x,cageVec[i].y,cageVec[i].habitat,nullptr,cageVec[i].id);
            }
             Zoo::Get(n).setCell(cageVec[i].x,cageVec[i].y,*habitat);
    }

    for(int i = 0; i< animal_str.size(); i++) {
        vector<string> x = splits_(animal_str[i],',');
        if(stoi(x[0]) < n && stoi(x[1]) < n) {
                animal_temp * temp = new animal_temp(stoi(x[1]), stoi(x[0]), x[2], stof(x[4]), x[3].compare("True") == 0 ? true : false, x[5], x[6]);
                x.clear();
                animalVec.push_back(*temp);
        }
    }

    for(int i=0; i<animalVec.size(); i++) {
           Animal * animal = nullptr;
            if(animalVec[i].name.compare("AfricanFrog") == 0) {
                animal = new AfricanFrog(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Caecilia") == 0) {
                animal = new Caecilia(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Exolotl") == 0) {
                animal = new Exolotl(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("FlyingFish") == 0) {
                animal = new FlyingFish(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Ostrich") == 0) {
                animal = new Ostrich(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Salamander") == 0) {
                animal = new Salamander(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("BirdOfParadise") == 0) {
                animal = new BirdOfParadise(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Eagle") == 0) {
                animal = new Eagle(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Hawk") == 0) {
                animal = new Hawk(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Owl") == 0) {
                animal = new Owl(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Peacock") == 0) {
                animal = new Peacock(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Bear") == 0) {
                animal = new Bear(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Deer") == 0) {
                animal = new Deer(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Elephant") == 0) {
                animal = new Elephant(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Girrafe") == 0) {
                animal = new Girrafe(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Lion") == 0) {
                animal = new Lion(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Tiger") == 0) {
                animal = new Tiger(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Lion") == 0) {
                animal = new Lion(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Mantaray") == 0) {
                animal = new Mantaray(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Piranha") == 0) {
                animal = new Piranha(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Seahorse") == 0) {
                animal = new Seahorse(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Shark") == 0) {
                animal = new Shark(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            } else if(animalVec[i].name.compare("Starfish") == 0) {
                animal = new Starfish(animalVec[i].x,animalVec[i].y,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
            }
            //Zoo::Get(n).getCell(animalVec[i].x,animalVec[i].y)->setAnimalPtr(animal);
            Zoo::Get(n).SetAnimal(*animal);
    }
    
    //cout << facility_str.size() << endl;
    for(int i = 0; i < facility_str.size(); i++) {
         vector<string> x = splits_(facility_str[i],',');
         if(stoi(x[0]) < n && stoi(x[1]) < n) {
            facility_temp * temp = new facility_temp(stoi(x[1]), stoi(x[0]), x[2], x[3]);
            x.clear();
            facilityVec.push_back(*temp);
         }
    }

    for(int i=0; i<facilityVec.size(); i++) {
            Facility * facility = nullptr;
            if(facilityVec[i].type.compare("Restaurant") == 0) {
                facility = new Restaurant(facilityVec[i].x,facilityVec[i].y,facilityVec[i].type,nullptr,-1,facilityVec[i].name);
            } else if(facilityVec[i].type.compare("Park") == 0) {
                facility = new Park(facilityVec[i].x,facilityVec[i].y,facilityVec[i].type,nullptr,-1,facilityVec[i].name);
            } else {
                if((facilityVec[i].x==n-1) || (facilityVec[i].y==n-1)) {
                    facility = new Road(facilityVec[i].x,facilityVec[i].y,"Road",nullptr,-1,"RoadExit");
                } else {
                    facility = new Road(facilityVec[i].x,facilityVec[i].y,"Road",nullptr,-1,facilityVec[i].name);
                }
            }
             Zoo::Get(n).setCell(facilityVec[i].x,facilityVec[i].y,*facility);
    }
}

int ConfigStore::SaveFile(std::ofstream& ofStream,int n) {
    if (!ofStream.is_open())
    {
        std::cerr << "Failed to open file!\n";
        return -1;
    } else {
        ofStream << "Virtual Zoo, 2017, Ensure." << endl << endl;
        ofStream << "[Cage]" << endl;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(Zoo::Get(n).getCell(i,j)->GetCageId() != -1) {
                    ofStream << Zoo::Get(n).getCell(i,j)->getLocY() << "," << Zoo::Get(n).getCell(i,j)->getLocX() << "," << Zoo::Get(n).getCell(i,j)->GetCageId() << "," << Zoo::Get(n).getCell(i,j)->getCellType()+"Habitat" << endl;
                }
            }
        }
        ofStream << "[END OF Cage]" << endl << endl;
        ofStream << "[Animal]" << endl;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(Zoo::Get(n).getCell(i,j)->getAnimalPtr() != nullptr) {
                    string d;
                    if(Zoo::Get(n).getCell(i,j)->getAnimalPtr()->GetTamed() == 1) {
                        d = "True";
                    } else {
                        d = "False";
                    }
                    ofStream << j << "," << i << "," << Zoo::Get(n).getCell(i,j)->getAnimalPtr()->GetName() << "," << d << "," << Zoo::Get(n).getCell(i,j)->getAnimalPtr()->GetWeight() << "," << Zoo::Get(n).getCell(i,j)->getAnimalPtr()->GetHabitat() << "," << Zoo::Get(n).getCell(i,j)->getAnimalPtr()->GetFoodType()<<  endl;
                }
            }
        }
        ofStream << "[END OF Animal]" << endl << endl;
        ofStream << "[Facility]" << endl;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(Zoo::Get(n).getCell(i,j)->getCellType().compare("Restaurant")==0 || Zoo::Get(n).getCell(i,j)->getCellType().compare("Park")==0) {
                    ofStream << j << "," << i << "," << Zoo::Get(n).getCell(i,j)->getCellType() << "," << Zoo::Get(n).getCell(i,j)->GetName() << endl;
                } else {
                    if(Zoo::Get(n).getCell(i,j)->GetName().compare("RoadEntrance") == 0 || Zoo::Get(n).getCell(i,j)->GetName().compare("RoadExit") == 0) {
                        ofStream << j << "," << i << "," << Zoo::Get(n).getCell(i,j)->getCellType() << "," << Zoo::Get(n).getCell(i,j)->GetName() << endl;
                    } else {
                        if(i == n-1 && j == n-1) 
                            ofStream << j << "," << i << "," << Zoo::Get(n).getCell(i,j)->getCellType() << "," << "RoadExit" << endl;
                    }
                }
            }
        }
        ofStream << "[END OF Facility]" << endl;

        return 1;
    }
}