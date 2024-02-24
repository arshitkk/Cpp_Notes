#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Q1.Find the number that appears once, and the other numbers twice

// Bruteforce (using linear search)
// 1 1 2 2 3 4 4
int once1(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (num == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            return num;
        }
    }
    return -1;
}

// Better Approach (Hashing)
int once2(vector<int> &arr)
{
    int n = arr.size();

    // Find the maximum element:
    int maxx = arr[0];
    for (int i = 0; i < n; i++)
    {
        maxx = max(maxx, arr[i]);
    }
    // Declare hash array of size maxi+1

    vector<int> hash(maxx + 1);
    // And hash the given array:

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    // find single element
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] == 1)
        {
            int num = arr[i];
            return num;
        }
    }
    return -1;
}
// Better 2 - HashMaps
int once3(vector<int> &arr)
{
    int n = arr.size();
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            int max = it.first;
            return max;
        }
    }
    return -1;
}

// Opimal using xor
int once4(vector<int> &arr)
{
    int xorji = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        xorji = xorji ^ arr[i];
    }
    return xorji;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cout << once2(arr);

    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    return 0;
}
