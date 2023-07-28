#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
int count;

for (int i = 0; i<n; i++){
        count =count+arr[i];

    }
cout<<count;
    return 0;
}