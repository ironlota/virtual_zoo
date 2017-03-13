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

    //cout << cage_str.size() << endl;
    for(int i = 0; i< cage_str.size(); i++) {
        //cout << "HI INI CAGE" << endl;
        vector<string> x = splits_(cage_str[i],',');
        cage_temp * temp = new cage_temp(stoi(x[0]), stoi(x[1]), stoi(x[2]), x[3]);
        //cout << x[0] << " " << x[1] << " " << x[2] << endl;
        x.clear();
        //cout << temp->x << " " << temp->y << " " << temp->id << " " << temp->habitat << endl;
        cageVec.push_back(*temp);
    }

    for(int i=0; i<cageVec.size(); i++) {
            Habitat * habitat;
            if(cageVec[i].habitat.compare("LandHabitat") == 0) {
                habitat = new LandHabitat(cageVec[i].x,cageVec[i].y,cageVec[i].habitat,nullptr,cageVec[i].id);
            } else if(cageVec[i].habitat.compare("WaterHabitat") == 0) {
                habitat = new WaterHabitat(cageVec[i].x,cageVec[i].y,cageVec[i].habitat,nullptr,cageVec[i].id);
            } else if(cageVec[i].habitat.compare("FlyingHabitat") == 0) {
                habitat = new FlyingHabitat(cageVec[i].x,cageVec[i].y,cageVec[i].habitat,nullptr,cageVec[i].id);
            }
             Zoo::Get(n).setCell(cageVec[i].x,cageVec[i].y,*habitat);
    }

    //cout << animal_str.size() << endl;
    for(int i = 0; i< animal_str.size(); i++) {
        //cout << animal_str[i] << endl;
        //cout << "HI INI CAGE" << endl;
        vector<string> x = splits_(animal_str[i],',');
        animal_temp * temp = new animal_temp(stoi(x[0]), stoi(x[1]), x[2], stof(x[3]), x[4].compare("True") == 0 ? true : false, x[5], x[6]);
        //cout << x[0] << " " << x[1] << " " << x[2] << endl;
        x.clear();
        animalVec.push_back(*temp);
    }

    for(int i=0; i<cageVec.size(); i++) {
           Animal * animal;
            if(cageVec[i].habitat.compare("LandHabitat") == 0) {
                habitat = new LandHabitat(cageVec[i].x,cageVec[i].y,cageVec[i].habitat,nullptr,cageVec[i].id);
            } else if(cageVec[i].habitat.compare("WaterHabitat") == 0) {
                habitat = new WaterHabitat(cageVec[i].x,cageVec[i].y,cageVec[i].habitat,nullptr,cageVec[i].id);
            } else if(cageVec[i].habitat.compare("FlyingHabitat") == 0) {
                habitat = new FlyingHabitat(cageVec[i].x,cageVec[i].y,cageVec[i].habitat,nullptr,cageVec[i].id);
            }
             Zoo::Get(n).setCell(cageVec[i].x,cageVec[i].y,*habitat);
    }
    
    //cout << facility_str.size() << endl;
    for(int i = 0; i < facility_str.size(); i++) {
         vector<string> x = splits_(facility_str[i],',');
         facility_temp * temp = new facility_temp(stoi(x[0]), stoi(x[1]), x[2], x[3]);
         x.clear();
         facilityVec.push_back(*temp);
    }
}