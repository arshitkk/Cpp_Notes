#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n;
    while (s<=e){
int mid = (s+e)/2;

if (arr[mid]==key){
return mid;
}
else if (arr[mid]<=key){
    s=mid;
}
else {
   e = mid;
}
}
return -1;
}
int main(){
//ARRAY DEFINE
int n = 7;
int arr[n] = {1, 2, 3, 4, 5, 6, 7};
cout<<"key daalo";
int key;
cin>>key;
//BINARY SEARCH
 cout<<BinarySearch(arr, n, key);

}