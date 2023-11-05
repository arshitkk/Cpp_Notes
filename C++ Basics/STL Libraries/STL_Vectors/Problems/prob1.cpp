// // A program to find the last occurence of an element X in a Vector
// #include <iostream>
// #include<vector>
// using namespace std;
// int main(){
 
//  int n;
//  cout<<"Enter the size of the Vector: ";
//  cin>>n;

//  vector<int> v;
//  cout<<"Enter the elements: ";
//  for (int i = 0; i<n; i++){
//     int elements;
//     cin>>elements;
//     v.push_back(elements);

//  }

// int x;
// cout<<"Enter the Element to find: ";
// cin>>x;

// int occurence = -1; //to save the occurence

// for (int i = 0; i<v.size(); i++){
//     if (x==v[i]){
//         occurence = i;
//     }
// }
// cout<<occurence;

//     return 0;
// }



// A program to find the last occurence of an element X in a Vector [DIRECT METHOD]
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
int occ;
    for (int i = v.size()-1; i>=0; i--){
        if(x==v[i]){
           occ = i;
           break;
        }
    }

    cout<<occ;

 return 0;
}