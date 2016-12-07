#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include "transfer.h"

using namespace std;
vector<string> split(string str, char delimiter) {
  vector<string> internal;
  stringstream ss(str); // Turn the string into a stream.
  string tok;
  
  while(getline(ss, tok, delimiter)) {
    internal.push_back(tok);
  }
  return internal;
}

vector<double>* trans(string p1,string p2,string p3){
    vector<string> s1=split(p1,' ');
    vector<string> s2=split(p2,' ');
    vector<string> s3=split(p3,' ');
    vector<double> *n_set=new vector<double>[3];
    int i=atoi(s1[0].c_str());
    for (;i>0;i--){
        int value = atoi(s1[i].c_str());
        n_set[0].push_back(value);
    }
    i=atoi(s2[0].c_str());
    for (;i>0;i--){
        int value = atoi(s2[i].c_str());
        n_set[1].push_back(value);
    }
    i=atoi(s3[0].c_str());
    for (;i>0;i--){
        int value = atoi(s3[i].c_str());
        n_set[2].push_back(value);
    }
    return n_set;
}