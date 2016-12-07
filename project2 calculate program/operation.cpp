#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "io.h"
#include "transfer.h"
#include "add.h"
#include "multiplication.h"
#include "mod.h"

//#include "mod.h"
using namespace std;

int main(int argc,char** argv){
    string *input;
    vector<double>* n_set;
    input = io(argv[1],argv[2],argv[3]);
    n_set = trans(input[0],input[1],input[2]);
    delete[] input;
    vector<double> product = multiplication(n_set[0],n_set[1]);
    vector<double> sum = add(n_set[0],n_set[1]);
     int i=product.size()-1;
     cout<<"product"<<endl;
    cout<<product.size()<<' ';
    for(;i>=0;i--){
        cout<<product[i]<<' ';
    }
    cout<<endl;
    i=sum.size()-1;
    cout<<"sum"<<endl;
    cout<<sum.size()<<' ';
    for(;i>=0;i--){
        cout<<sum[i]<<' ';
    }
    cout<<endl;
    
    vector<double> remain = mod(sum,n_set[2]);
    i = remain.size()-1;
    cout<<"mod"<<endl;
    cout << remain.size()<<' ';
    for(;i>=0;i--){
        cout<<remain[i]<<' ';
    }
    cout<<endl;
    
   // reverse(sum.begin(),sum.end()); //reverse the vector sum
    
    delete[] n_set;
    return 0;
}