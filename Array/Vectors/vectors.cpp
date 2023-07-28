#include <iostream>
#include <vector>
using namespace std; 
int main()
{
vector <int> v; //Initialize Vector
cout<<"Size of Vector: "<<v.size()<<endl; //Display Size of Vector 
cout<<"Capacity of Vector: "<<v.capacity()<<endl; //Display Capacity of Vector


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

v.pop_back(); //delete the last element 
v.pop_back();
v.pop_back();
v.pop_back();
cout<<"Size of Vector: "<<v.size()<<endl;
cout<<"Capacity of Vector: "<<v.capacity()<<endl;

return 0;
}




