//find the secound largest number in an array [OPTIMIZED]
#include<iostream>
using namespace std;
int SecoundLargestNumber(int n, int arr[]){
    int max = INT_MIN;
    int secoundMax = INT_MIN;
    for (int i = 0; i<n; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    for(int i = 0; i<n; i++){
        if (arr[i]>secoundMax && arr[i]!=max){
            secoundMax=arr[i];
        }
    }
    return secoundMax;
}
int main(){
int n=7;
int arr[n]={2, 3, 7, 7, 6, 1, 7};
cout<<SecoundLargestNumber(n, arr);
}