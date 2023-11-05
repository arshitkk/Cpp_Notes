#include<iostream>
#include<vector>
using namespace std;
int main(){

int n;
cin>>n;
vector<int> v;

// taking input
for (int i = 0; i<n; i++){
    int elements;
    cin>>elements;
    v.push_back(elements);
}

//inserting Element 
v.insert(v.begin()+2, 9); //insert Value at particular place, v.begin is starting Index
v.insert(v.end()-1, 8); //v.end is last index

//removing elements
v.erase(v.begin()); 
v.erase(v.end()-1);

//printing the vector

// For Loop
  for(vector<int>::iterator it = v.begin(); it !=v.end(); it++){
    cout<<*(it)<<" ";
  }
  //* OR
 for(auto it = v.begin(); it !=v.end(); it++){
    cout<<*(it)<<" ";
  }

  //* OR
 for(auto it : v){
    cout<<it;
  }

//* OR
for (int i = 0; i<v.size(); i++){
    cout<<v[i]<<" ";
}
cout<<endl;
// while loop
int idx = 0;
while (idx<v.size()){
    cout<<v[idx]<<" ";
    idx++;
}


    return 0;   
}