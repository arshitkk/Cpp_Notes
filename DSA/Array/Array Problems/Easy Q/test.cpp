#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Majority Element
// Bruteforce Approach
// TC -> O(n^2)
int Maj_Elem(int arr[], int n)
{
    int cnt = 0;
    int el;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
            el = arr[i];
        else if (el == arr[i])
            cnt++;
        else
            cnt--;
    }

    int cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
            cnt2++;
    }
    if (cnt2 > n / 2)
        return el;
}

int main()
{

    int n;
    // cout<<"Enter the size of an array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << Maj_Elem(arr, n);
    // for (auto it : i)
    // {
    //     cout << it << " ";
    // }
}
