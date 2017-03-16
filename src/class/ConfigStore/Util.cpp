#include "Util.h"

void removeCharsFromString( string &str, char* charsToRemove ) {
   for ( unsigned int i = 0; i < strlen(charsToRemove); ++i ) {
      str.erase( remove(str.begin(), str.end(), charsToRemove[i]), str.end() );
   }
}

vector<string> splits_(string& str, char delimiter) {
  vector<string> internal;
  stringstream ss(str); // Turn the string into a stream.
  string tok;
  
  while(getline(ss, tok, delimiter)) {
    internal.push_back(tok);
  }
  
  return internal;
}

void clearwait(int n) {
  #ifdef _WIN32
    sleep(n);
    system("cls");
#elif __linux__
    usleep(n*1000000);
    system("clear");
#endif
}