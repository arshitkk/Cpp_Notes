#include <iostream>
using namespace std;

//!print name till N times

void name(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Arshit" << endl;
    name(i + 1, n);
}
int main()
{
    int n = 5;
    name(1, n);
}
// O(n)