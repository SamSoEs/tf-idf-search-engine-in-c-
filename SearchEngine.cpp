#include "SearchEngine.h"

using namespace std;

int main(int argc, char **argv){
    if(argc != 5 || strcmp(argv[1],"-d") || strcmp(argv[3], "-k")){
        cout << "Wrong arguments" << endl;
        return -1;
    }
    cout << "PLease wait" << endl;
    int lineCounter = 0;
    int maxLength = -1;
    int k = atoi(argv[4]);
    FILE* file = fopen(argv[2], "r");
    if(file == NULL){
        cout << "Eror opening the file" << endl;
    }
    fclose(file);

    int t = readSizes(&lineCounter, &maxLength, argv[2]);

    return 0;    
}