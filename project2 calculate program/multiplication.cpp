#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<double> multiplication(vector<double> n1,vector<double> n2){
    vector<double> product(n1.size()+n2.size()-1,0);
    int i;
    for (i=0;i<n1.size();i++){
        int j;
        for(j=0;j<n2.size();j++){
            product[i+j]+=(n2[j]*n1[i]);
        }
    }
    
    return product;
}
