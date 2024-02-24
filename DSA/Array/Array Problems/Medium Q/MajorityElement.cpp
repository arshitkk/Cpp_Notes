#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Majority Element
// Bruteforce Approach
// TC -> O(n^2)
int Maj_Elem(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                cnt++;
            }
        }
        if (cnt > n / 2)
        {
            return arr[i];
        }
    }
}

// Better Approach - Using hashmap
int Maj_Elem2(int arr[], int n)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second > n / 2)
        {
            return it.first;
        }
    }
}
// Optimal Approach
int Maj_Elem3(int arr[], int n)
{
    int cnt = 0;
    int el;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            el = arr[i];
        }
        else if (arr[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt2;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == el)
        {
            cnt2++;
        }
    }
    if (cnt2 > n / 2)
    {
        return el;
    }
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
    cout << Maj_Elem2(arr, n);
    // for (auto it : i)
    // {
    //     cout << it << " ";
    // }
}
