#include <iostream>
using namespace std;

//!Method 1
void print1(int n, int i)
{
    int cnt = n;
    if (cnt == 0)
    {
        return;
    }
    cout << cnt << endl;
    cnt--;
    print1(n - 1, i);
}
//!Method 2
void print2(int i, int n){
if (i<1){
    return;
}
    cout<<i;
    print2(i-1,n);
}
//! Using Backtracking
void printBT(int i, int n){
    if (i>n){
        return;
    }
    printBT(i+1,n);
    cout<<i;
}
int main()
{
    int n;
    cin >> n;
    printBT(1, n);
}