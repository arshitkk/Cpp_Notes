#include<iostream>
using namespace std;
int main(){
int n, m;
cout<<"Enter 1st Number :";
cin>>n;
cout<<"Enter 2nd Number :";
cin>>m;
cout<<"1. Sum\n2. Sub\n3. Mult\n4. Div\n";
int op;
cout<<"Enter the operator: ";
cin>>op;

switch (op){
case 1 : 
    cout<<n+m;
    break;
case 2 : 
    cout<<n-m;
    break;
case 3 : 
    cout<<n*m;
    break;
case 4 : 
    cout<<n/m;
    break;

default:
    cout<<"Enter valid Operator";
break;
}
    return 0;

}