#include <iostream>
using namespace std;
//!Method 1
int cnt = 0;
void print1(int i,int n)
{
    if (cnt > n)
    {
        return;
    }
    cout << cnt << endl;
    cnt++;
    print1(i+1,n);
}

//!Method 2

void print2(int i, int n){
    if (i>n){
        return;
    }
    cout<<i;
    print2(i+1,n);
}

//!Using Backtracking
void PrintBT(int i,int n){
    if (i<1){
        return;
    }
    PrintBT(i-1,n);
    cout<<i;

}
int main()
{
    int n;
    cin >> n;
    PrintBT(n,n);
}