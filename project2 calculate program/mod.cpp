#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "mod.h"
using namespace std;

vector<double> mod(vector<double> t, vector<double> d){
    vector<double> result;
    vector<double> m;    //middle polynomial
    
    while(1){
        int i;
        //------------print the vector t ----------------//
        // i = 0;
        // for(;i<t.size();i++){
        //     cout << t[i] <<' ';
        // }
        // cout<<endl;
    
    
        //-----------print the vector d ---------------//
        // i = 0;
        // for(;i<d.size();i++){
        //     cout << d[i] <<' ';
        // }
        // cout<<endl;
    
        double factor = ((double)t[t.size()-1])/d[d.size()-1];
        i=0; 
        int j=0;
        
        for(;i<d.size();i++){
            m.push_back(d[i]*factor);
        }
    
         //-----------print the vector m ---------------//
        // i = 0;
        // for(;i<m.size();i++){
        //     cout << m[i] <<' ';
        // }
        // cout<<endl;
    
        i=m.size()-1;
        j=t.size()-1;
        for(;j>=0;j--,i--){
            if(i>=0) {result.push_back(t[j]-m[i]);}
            else {result.push_back(t[j]);}
        }
        
        while(result[0]==0&&result.size()>0){
            result.erase(result.begin());
        }
        m.clear();
        t.clear();
        t = result;
        
        result.clear();
        reverse(t.begin(),t.end());
        
        //bei zheng chu le
        if(t.size() == 0){
            t.push_back(0);
            return t;
        }
        if(d.size()>t.size()){
            break;
        }
       
    }
    
    return t;
}