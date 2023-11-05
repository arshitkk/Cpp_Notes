// Find the diff betweem the sum of the odds and evens in a given array
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
int even = 0;
int odd = 0;
for (int i = 0; i<n; i++){
    if (i%2==0){
          even = even + arr[i];
    }
    else{
        odd = odd + arr[i];

    }
}
cout<<even -odd;
  
   return 0;
}