#include <fstream>
#include <string>
#include <iostream>
#include "io.h"
using namespace std;

string* io(char* f1,char* f2,char* f3){
    
    string *v=new string[3];
    ifstream inFile;
    inFile.open(f1);
    getline(inFile,v[0]);
    inFile.close();
    ifstream inFile1;
    inFile1.open(f2);
    getline(inFile1,v[1]); 
    inFile1.close();
    ifstream inFile2;
    inFile2.open(f3);
    getline(inFile2,v[2]); 
    inFile2.close();
    return v;
}
