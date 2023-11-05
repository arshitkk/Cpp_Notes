#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//! Method 1
void RevArray(int s, int l, int arr[])
{
    if (s >= l)
    {
        return;
    }
    swap(arr[s], arr[l]);
    RevArray(s + 1, l - 1, arr);
}
//! Method 2

void RevArray2(int i, int n, int arr[])
{
    if (i == n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    RevArray2(i + 1, n, arr);
}

int main()
{
    int n = 10;
    int arr[n] = {9, 7, 9, 6, 6, 4, 7, 9, 5, 3};
    // RevArray(0, n - 1, arr);
    RevArray2(0, n, arr);
    cout << "reversed array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}