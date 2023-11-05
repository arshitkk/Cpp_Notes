#include <iostream>
using namespace std; 
int LinearSearchh(int arr[], int key, int n){
    for (int i=0; i<n; i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
int n;
cin>>n;
int arr[n];
for (int i=0; i<n; i++){
    cin>>arr[i];
}
cout<<"ENTER THE KEY: ";
int key;
cin>>key;

cout <<"it is in "<<LinearSearchh(arr,key, n)<<" position.";

    return 0;
}