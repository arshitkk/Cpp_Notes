//find the secound largest number in an array
#include<iostream>
using namespace std;
int MaxNumberIndex(int n, int arr[]){
int Max = INT_MIN;
int MaxIndex;
    for (int i =0; i<n; i++){
        if (arr[i]>Max){
            Max=arr[i];
            MaxIndex=i;
        }
    }
    return MaxIndex; 
}

int main(){
int n=6;
// int max;
int arr[n]={1, 6, 6, 6, 2, 5};

int MaxIndex = MaxNumberIndex(n, arr);
int MaxValue = arr[MaxIndex];
for (int i = 0; i<n; i++){
    if (arr[i] == MaxValue){
        arr[i]=-1;
    }
}

MaxIndex = MaxNumberIndex(n, arr);

cout<<"index: "<<MaxIndex<<endl;
cout<<"Value: "<<arr[MaxIndex]<<endl;
cout<<"Array: ";
for (int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
}



}