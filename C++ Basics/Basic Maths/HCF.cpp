#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n1, n2, hcf;
    cin >> n1 >> n2;
//! Bruteforce Method
    /*
       for (int i=1; i<=min(n1,n2); i++){
           if (n1%i==0 && n2%i==0){
               hcf=i;
           }
       }
       cout<<hcf;
   */
//! Euclidean Algorithm
while(n1>0 && n2>0){
    if (n1>n2){
       n1=n1%n2;
    }
    else {
        n2=n2%n1;
    }
}
if (n2==0){
    cout<<n1;
}
else{
    cout<<n2;
}

    return 0;
}