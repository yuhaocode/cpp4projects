#include <iostream>
#include <vector>
#include <string>
#include "add.h"
using namespace std;


vector<double> add(vector<double> n1,vector<double> n2){
    
    vector<double> sum;
    vector<double> bigger;
    int smaller=0;
    if(n2.size()>n1.size()){
        smaller=n1.size();
        bigger=n2;
    }
    else{
        smaller=n2.size();
        bigger=n1;
    }
    int i=0;
    for (;i<smaller;i++){
        sum.push_back(n1[i]+n2[i]);
    }
    for (;i<bigger.size();i++){
        sum.push_back(bigger[i]);
    }
    return sum;
}
