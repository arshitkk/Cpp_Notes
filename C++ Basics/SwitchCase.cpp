#include<iostream>
using namespace std;
int main(){

int a,b;
char OP;
cout<<"Enter first number: ";
cin>>a;
cout<<"Enter secound number: ";
cin>>b;
cout<<"Select the Operator: ";
cin>>OP;

switch (OP)
{
case '+':
     cout<<a<<" + "<<b<<" = "<<a+b;
    break;
case '-':
     cout<<a<<" - "<<b<<" = "<<a-b;
    break;
case '*':
     cout<<a<<" X "<<b<<" = "<<a*b;
    break;
case '/':
     cout<<a<<"/"<<b<<" = "<<a/b;
    break;
default:
    cout<<" invalid operator ";
    break;
}

return 0;
}