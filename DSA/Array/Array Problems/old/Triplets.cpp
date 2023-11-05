//Find the total no.of Triplets in an  array whose sum is equal to the given X
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
int TargetSum;
cout<<"Enter the Target Sum: ";
cin>>TargetSum;

int pairs = 0;

for (int i = 0; i<n; i++){
    for (int j = i+1; j<n; j++){
        for (int k = i+2; j<n; j++){
            if (arr[i]+arr[j]+arr[k]==TargetSum){
            pairs++;
            }
        }
    }
}
cout<<pairs;

return 0;
}