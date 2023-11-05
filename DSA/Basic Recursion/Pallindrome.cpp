#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Pall(int i, int n, string s)
{
    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] != s[n - i - 1])
    {
        return false;
    }
    return Pall(i + 1, n, s);
}
int main()
{
    int n = 5;
    string s = "MADAM";
    cout << Pall(0, n, s);
}