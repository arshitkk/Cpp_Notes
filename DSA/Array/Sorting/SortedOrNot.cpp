#include<iostream>
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
bool sorted = true ;

for(int i = 1; i<n; i++){
    if (arr[i]<=arr[i-1]){
     sorted = false;
    }
}
// if (sorted==true){
//     cout<<"sorted";
// }
// else {
//     cout<<"unsorted";
// }
cout<<sorted;
    return 0;
}