#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of an array: ";
cin>>n;
int arr[n];
cout<<"Enter the elements of the array: ";
for (int i=0; i<n; i++){
    cin>>arr[i];
}
int count = 0;
for (int i = 0; i<n; i++){
    count = count + arr[i];
}

cout<<count;
   return 0;
}