//Find the total occurences of an Element X
#include <iostream>
#include<vector>
using namespace std;
int main(){
 
 int n;
 cout<<"Enter the size of the Vector: ";
 cin>>n;

 vector<int> v;
 cout<<"Enter the elements: ";
 for (int i = 0; i<n; i++){
    int elements;
    cin>>elements;
    v.push_back(elements);

 }

int x;
cout<<"Enter the Element to find: ";
cin>>x;

int occurence = 0; //to save the occurence

for (int i = 0; i<v.size(); i++){
    if (x==v[i]){
        occurence++;
    }
}
cout<<occurence;

    return 0;
}
