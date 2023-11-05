#include<bits/stdc++.h> //*Utility
using namespace std;
int main(){
//! BINARY SEARCH 

vector<int> v1 = {1,2,3,4,5,6};
cout<<binary_search(v1.begin(), v1.end(),1)<<endl;


//! SORT 

//todo -> it works on introSort(heap+quick+insertionSorts)


//* For Arrays
int arr[] = {4,2,1};
sort(arr, arr+3);
cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
//? Output: arr[] = {1,2,4}


//* For Arrays
vector<int> vec = {4,2,1};
sort(vec.begin(), vec.end());
//? Output: vec = {1,2,4}


//* Reverse Sorting 
sort(arr, arr+3, greater<int>());
cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
//? Output: arr[] = {4,2,1}

//! REVERSE 
string a = "shit";
cout<<endl<<a;
reverse(a.begin(), a.end());
cout<<endl<<"Reverse: "<<a<<endl;

//! ROTATE 
vector<int> v = {7,5,4,2,1};

rotate(v.begin(),v.begin()+2,v.end());
for (int i:v){
    cout<<i<<" ";
}

return 0;
}