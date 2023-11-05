#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

//! Method 1(Array):                                       
/*
    int divisors[n]={n};
    int dump[]={};
    for(int i = 1; i<=n; i++){
        if (n%i==0){
            divisors[i]=i;
        }
        else ;
    }
    for(int i =0; i<n; i++){
        if (divisors[i]!=0){
        cout<<divisors[i]<<" ";
        }
    }
*/    
    
//! Method 2:                                                 
/* 
    for(int i = 1; i<=n; i++){
        if (n%i==0){
            cout<<i<<" ";
        }
    }
*/

//! Method 3:                                                 
vector<int> v;
for(int i = 1; i<=sqrt(n); i++){
        if (n%i==0 ){
            v.push_back(i);
        }
        if (n/i !=i){
            v.push_back(n/i);
        }
    }
    sort(v.begin(), v.end());

    for (int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }


    return 0;
}