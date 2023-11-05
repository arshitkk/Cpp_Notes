#include <iostream>
#include <vector>
using namespace std; 
int main()
{
vector <int> v; //Initialize Vector
cout<<"Size of Vector: "<<v.size()<<endl; //Display Size of Vector 
cout<<"Capacity of Vector: "<<v.capacity()<<endl; //Display Capacity of Vector

//* Insert Element

// Insert 
v.insert(v.begin(), 20); // {20,10,20,30,40,50}
v.insert(v.begin(),+1, 2, 90); // {10,90,90,20,30,40,50}  2 instances of 90
vector<int> b = {11,22,44,33};
v.insert(v.begin(), b.start(), v.end()); //{11,22,44,33,10,90,90,20,30,40,50}

//pushback

v.push_back(1); //Instert Element at the end of the Vector 
cout<<"Size of Vector: "<<v.size()<<endl;
cout<<"Capacity of Vector: "<<v.capacity()<<endl;


v.push_back(2);
cout<<"Size of Vector: "<<v.size()<<endl;
cout<<"Capacity of Vector: "<<v.capacity()<<endl;

v.push_back(10);
cout<<"Size of Vector: "<<v.size()<<endl;
cout<<"Capacity of Vector: "<<v.capacity()<<endl;

v.resize(5); //Resize the Vector
cout<<"Size of Vector: "<<v.size()<<endl;
cout<<"Capacity of Vector: "<<v.capacity()<<endl;

v.resize(10);
cout<<"Size of Vector: "<<v.size()<<endl;
cout<<"Capacity of Vector: "<<v.capacity()<<endl;


cout<<"Size of Vector: "<<v.size()<<endl;
cout<<"Capacity of Vector: "<<v.capacity()<<endl;

//* Delete Element
// {10,20,30,40,50}  <--VECTOR

// Clear
v.clear(); //Clear the entire Vector

//Pop.Back
v.pop_back(); //Delete the last element {10,20,30,40}
v.pop_back();// {10,20,30,}

// erase()
v.erase(v.begin()+1); //delete the 1st indexed element// {10,30,40,50}
v.erase(v.begin()+1,v.end());// {10, 20, 50} Not include end and start element.


//*Swap
// v1 --> {20,40}
// v2 --> {10,30}
v1.swap(v2); //v1 --> {10,30}, v2 --> {20,40}

//Empty - check wether vector is emoty or not

cout<<empty(); //gives true if empty else false 






return 0;
}




