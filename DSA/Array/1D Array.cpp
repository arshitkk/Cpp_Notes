#include<iostream>
using namespace std;
int main(){

//Define Array

// int array_name[size]={'array elements'};

int arr1[5]= {1,2,3,4,5};

//print Array
int n;
cin>>n;
int arr2[n];

//Taking Input
for (int i=0; i<n; i++){
    cin>>arr2[i];
}

//Giving Output
for (int i=0; i<n; i++){
    cout<<arr2[i];
}

    return 0;
}