/* STL Libraries
Standard Template Library (STL) is a set of C++ template classes
to provide common programming data structures and functions such as
lists, stacks, arrays, etc. It is a library of 
a) Container 
b) Functions, 
c) Algorithms, 
d) Iterators. 
It is a generalized library and so, its components are parameterized
*/ 

//! A) CONTAIERS------------------------------------------------------------------------------------------------------

//! PAIRS
/* Pair is used to combine together two values that may be of 
different data types.
The first element is referenced as ‘first’ and the second element as ‘second’
and the order is fixed (first, second).
*/

#include<bits/stdc++.h> //*Utility
using namespace std;
int main(){

    //* Syntax
    pair<int,int> NameOfthePair = {5,2};
    cout<<NameOfthePair.first<<" "<<NameOfthePair.second<<endl; 


    //* Nested Pairs
    pair<int, pair<int, int >> a = {4,{5,2}};
    cout<<a.first<<" "<<a.second.first<<" "<<a.second.second<<endl;

    //* Array in pairs
    pair<int, int > arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[0].first<<" "<<arr[1].second;

//! VECTOR
// HAS  A DEDICATED FOLDER "STL_VECTORS" REFFER THAT.





//! LIST 
//just like vectors

list<int> dq;
dq.pushback(2); // {2}
dq.emplace_back(4); // {2,4}
dq. push_front(5); //{5,2,4}

// rest of the funtions are same as vectors


//! DEQUE
//Same as vectors and list

deque<int> dq;
dq.pushback(2); // {2}
dq.emplace_back(4); // {2,4}
dq. push_front(5); //{5,2,4}

// rest of the funtions are same as vectors


//! STACK 
// LIFO -> Last In First Out

stack<int> st; // {}
st.insert(1); // {1}
st.insert(2); // {2,1}
st.insert(3); // {3,2,1}
st.insert(3); // {4,3,2,1}
st.insert(5); // {5,3,3,2,1}

//* Print the top element

cout<<st.top(); // print "5" and indexing not allowed in stack

st.pop(); // {3,3,2,1}
cout<<st.top(); // {3}
cout<<st.size(); // 4
cout<<empty(); //{false}

//* swap
stack<int> st1, st2;
st1.swap(st2);

//! QUEUE 
// FIFO -> First In First Out

queue<int> q; // {}
q.insert(1); // {1}
q.insert(2); // {1,2}
q.emplace(4); // {1,2,4}

q.back() += 9; // {1,2,9}

cout<<q.back(); // 9 

cout<<q.front(); // 1 

q.pop(); // {2,9}

cout<<q.front(); // 2


//!PRIORITY QUEUE(Max Heap)

//In this the largest element stays on the top

priority_queue<int> pq; // {}
pq.insert(5); // {5}
pq.insert(2); // {5,2}
pq.insert(8); // {8,5,2}
pq.emplace(10); // {10,8,5,2}

cout<<pq.top(); // 10

pq.pop(); // deletes top element 10

cout<<pq.top(); // 8

//size, swap, empty functions are same;

//? MINIMUM HEAP

priority_queue<int, vector<int>, greater<int>> mpq; // {}
mpq.insert(5); // {5}
mpq.insert(2); // {2,5}
mpq.insert(8); // {2,5,8}
mpq.emplace(10); // {2,5,8,10}


cout<<mpq.top(); // 2

//! SET 
//stores in Sorted Order and must be Unique

set<int> s; // {}

s.insert(1); // {1}
s.emplace(2); // {1,2}
s.insert(2); // {1,2} -> no repeated values
s.insert(4); // {1,2,4}
s.insert(3); // {1,2,3,4}

s.erase(4); // {1,2,3}

auto it = s.find(3);
auto it = s.find(6); // if not found it'll return s.end value

int cnt = s.count(1); // count the occurence in the  set if no occurence return 0

auto it = s.find(1);
s.erase(it); // {erase index 1 element}

//erase{start,end}
auto it1 = s.find(2);
auto it2 = s.find(4);
s.erase(it1, it2); // {1,4}


//! MULTISET 
//Same as Set but can stores repeated elements

multiset<int> ms;
ms.insert(1); // {1}
ms.insert(1); // {1,1}
ms.insert(1); // {1,1,1}

ms.erase(1); // all 1's will be erased

ms.erase(ms.find(1)); //delete only one 1

ms.erase(ms.find(1), ms.find(1) + 2);

// rest of the functions are same 


//! UNORDERED SET 

unordered_set<int> us;
// lower and upper bound dont work 
//better complexity
//do not store in any particular order
//rest of the functions are same


//! MAPS 
// Use to store in KEY-VALUE Pairs;
// KEY should be Unique , VALUE can be repeated
map<int, int> mpp;
map<pair<int, int >, int> mpp2;
map<int, pair<int, int >> mpp3;

mpp[1]=10; //1 is key and its value is 10
mpp.insert({2,20});
mpp.insert({3,30});

// printing

for (auto it : mpp){
    cout<<it.first<<" "<<it.second<<" ";
}

cout<<mpp[1]; // return 10 as the Key 1 has 10 value
auto it : mpp.find(30);
// cout<<*(it.second);

//!MULTIMAP 
//Same but can store duplicate values but, in sorted oder



//!UNORDERED MAP 
//Same but not sorted 

