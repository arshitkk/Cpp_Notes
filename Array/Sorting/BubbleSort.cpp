#include<iostream>
using namespace std;
int BubbleSort(int n, int arr[], int counter){

counter = 1;
while (counter<n){
for (int i=0; i<n-counter; i++){
    if (arr[i]>arr[i+1]){
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
}
    counter++;
}
return 0;
}
int main(){
int n;
cin>>n;
int arr[n];
int counter;

for (int i=0; i<n; i++){
    cin>>arr[i];
}

cout<<"Unsorted : ";

for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

BubbleSort(n, arr, counter);

cout<<"Sorted : ";

for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}


    return 0;
}
