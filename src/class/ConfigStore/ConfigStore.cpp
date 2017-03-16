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

    string * cage_str = new string[1000];
    int neff_cage_str = 0;
    string * animal_str = new string[1000];
    int neff_animal_str = 0;
    string * facility_str =new string[1000];
    int neff_facility_str = 0;
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
                else {
                  //cout << lineCage << endl;
                    cage_str[neff_cage_str] = lineCage;
                    neff_cage_str++;
                    }
                }
            }
            if (lines.find(ANIMAL) != std::string::npos) {
                while (std::getline(inStream, lineCage) && !(lineCage.find(ENDANIMAL) != std::string::npos)) {
                if (lineCage.empty()) continue;
                else {
                    animal_str[neff_animal_str] = lineCage;
                    neff_animal_str++;
                    }
                }
            }
            if (lines.find(FACILITY) != std::string::npos) {
                while (std::getline(inStream, lineCage) && !(lineCage.find(ENDFACILITY) != std::string::npos)) {
                    if (lineCage.empty()) continue;
                    else {
                        facility_str[neff_facility_str] = lineCage;
                        neff_facility_str++;
                    }
                }
            }    
        }
    }
    //cout << neff_cage_str << endl;
    cageVec = new cage_temp[neff_cage_str];
    for(int i = 0; i< neff_cage_str; i++) {
        std::string delimiter = ",";
        size_t pos = 0;
        std::string x[4];
        int j = 0;
        while ((pos = cage_str[i].find(delimiter)) != std::string::npos) {
            x[j] = cage_str[i].substr(0, pos);
            cage_str[i].erase(0, pos + delimiter.length());
            j++;
        }
        x[3] = cage_str[i];
        cage_temp * temp = new cage_temp(stoi(x[1]), stoi(x[0]), stoi(x[2]), x[3]);
        cageVec[neff_cageVec] = *temp;
        neff_cageVec++;
    }

    
    for(int i=0; i<neff_cageVec; i++) {
            if(cageVec[i].habitat.compare("LandHabitat") == 0) {
                Cell temp(cageVec[i].x,cageVec[i].y,cageVec[i].habitat,nullptr,cageVec[i].id,'x',cageVec[i].habitat);
                Zoo::Get(n).SetCell(cageVec[i].x,cageVec[i].y,temp);
            } else if(cageVec[i].habitat.compare("WaterHabitat") == 0) {
                Cell temp(cageVec[i].x,cageVec[i].y,cageVec[i].habitat,nullptr,cageVec[i].id,'~',cageVec[i].habitat);
                Zoo::Get(n).SetCell(cageVec[i].x,cageVec[i].y,temp);
            } else if(cageVec[i].habitat.compare("FlyingHabitat") == 0) {
                Cell temp(cageVec[i].x,cageVec[i].y,cageVec[i].habitat,nullptr,cageVec[i].id, 'O',cageVec[i].habitat);
                Zoo::Get(n).SetCell(cageVec[i].x,cageVec[i].y,temp);
            }       
    }
    
    animalVec = new animal_temp[neff_animal_str];
    for(int i = 0; i< neff_animal_str; i++) {
        std::string delimiter = ",";
        size_t pos = 0;
        std::string x[7];
        int j = 0;
        while ((pos = animal_str[i].find(delimiter)) != std::string::npos) {
            x[j] = animal_str[i].substr(0, pos);
            animal_str[i].erase(0, pos + delimiter.length());
            j++;
        }
        x[6] = animal_str[i];
        //cout << x[0] << " " << x[6] << " " << endl;
        animal_temp * temp = new animal_temp(stoi(x[1]), stoi(x[0]), x[2], stof(x[4]), x[3].compare("True") == 0 ? true : false, x[5], x[6]);
        animalVec[neff_animalVec] = *temp;
        neff_animalVec++;
    }

    for(int i=0; i<neff_animalVec; i++) {
           Animal * temp = new Animal(animalVec[i].x,animalVec[i].y,animalVec[i].name,animalVec[i].tamed,animalVec[i].weight,animalVec[i].foodtype,animalVec[i].habitat);
           //Cell temp(cageVec[i].x,cageVec[i].y,cageVec[i].habitat,nullptr,cageVec[i].id, 'O',cageVec[i].habitat);
           Zoo::Get(n).SetAnimal(animalVec[i].x,animalVec[i].y,temp);
    }

    facilityVec = new facility_temp[neff_facility_str];
    for(int i = 0; i< neff_facility_str; i++) {
        std::string delimiter = ",";
        size_t pos = 0;
        std::string x[4];
        int j = 0;
        while ((pos = facility_str[i].find(delimiter)) != std::string::npos) {
            x[j] = facility_str[i].substr(0, pos);
            //cout << x[j];
            facility_str[i].erase(0, pos + delimiter.length());
            j++;
        }
        x[3] = facility_str[i];
        //cout << endl;
        //cout << x[0] << " " << x[1] << " " << endl;
        facility_temp * temp = new facility_temp(stoi(x[1]), stoi(x[0]), x[2], x[3]);
        //cout << x[0] << " " << x[1] << " " << x[2] << " " << x[3] <<endl;
        facilityVec[neff_facilityVec] = *temp;
        neff_facilityVec++;
    }
    
    for(int i=0; i<neff_facilityVec; i++) {
            if(facilityVec[i].type.compare("Road") == 0) {
                Cell facility(facilityVec[i].x,facilityVec[i].y,facilityVec[i].type,nullptr,-1,' ',facilityVec[i].name);
                Zoo::Get(n).SetCell(facilityVec[i].x,facilityVec[i].y,facility);
            } else if(facilityVec[i].type.compare("Restaurant") == 0) {
                Cell facility(facilityVec[i].x,facilityVec[i].y,facilityVec[i].type,nullptr,-1,'R',facilityVec[i].name);
                Zoo::Get(n).SetCell(facilityVec[i].x,facilityVec[i].y,facility);
            } else if(facilityVec[i].type.compare("Park") == 0) {
                Cell facility(facilityVec[i].x,facilityVec[i].y,facilityVec[i].type,nullptr,-1,'P',facilityVec[i].name);
                Zoo::Get(n).SetCell(facilityVec[i].x,facilityVec[i].y,facility);
            } 
    }
    

    delete [] animal_str;
    delete [] cage_str;
    delete [] facility_str;
}