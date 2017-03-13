#include "ConfigStore.h"

void removeCharsFromString( string &str, char* charsToRemove ) {
   for ( unsigned int i = 0; i < strlen(charsToRemove); ++i ) {
      str.erase( remove(str.begin(), str.end(), charsToRemove[i]), str.end() );
   }
}

int ConfigStore::parseFile(std::ifstream& inStream) {
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
    const string CAGE = "[Cage]";
    const string FACILITY = "[Facility]";

    vector<string> cage_str;
    vector<string> animal_str;
    vector<string> facility_str;
    // Main reading loop:
    //
    string lines;
    string lineCage;
    string CageSeparator;
    while (std::getline(inStream, lines))
    {   
        if (lines.empty()) continue;
        if (lines.find(CAGE) != std::string::npos)
        {
            while (std::getline(inStream, lineCage) && !(lineCage.find(ANIMAL) != std::string::npos)) {
               removeCharsFromString(lineCage, "{}()");
               cage_str.push_back(lineCage);
            }
        }
        if (lines.find(ANIMAL) != std::string::npos) {
            while (std::getline(inStream, lineCage) && !(lineCage.find(FACILITY) != std::string::npos)) {
               animal_str.push_back(lineCage);
            }
        }
        if (lines.find(FACILITY) != std::string::npos) {
            while (std::getline(inStream, lineCage)) {
               facility_str.push_back(lineCage);
            }
        }
    }

    for(int i = 0; i< cage_str.size(); i++) {
        string token;
        std::stringstream ss(cage_str[i]);
        while(std::getline(ss,token,',')) {
            /**for(j = 0; j < cage_str[i].size(); j++) {
                cage c;
            }*/
        }
    }

    for(int i = 0; i< facility_str.size(); i++) {
        //cout << facility_str[i] << endl;
    }
}
 
ConfigStore::ConfigStore(const ConfigStore& C) {

}

ConfigStore& ConfigStore::operator=(const ConfigStore& C) {

    return *this;
}