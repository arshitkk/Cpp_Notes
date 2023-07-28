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


//Unsorted Array
cout<<"Unsorted: ";
for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

//insertion Sort Algorithm
for (int i = 1; i<n; i++){
int temp = arr[i];
int j = i-1;
while(arr[j]>temp && j>=0){
    arr[j+1]= arr[j];
    j--;
}
arr[j+1] = temp;
}

cout<<endl;

//Sorted Array
cout<<"Sorted: ";
for (int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

return 0;
}