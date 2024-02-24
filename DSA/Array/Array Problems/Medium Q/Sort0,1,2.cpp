#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Sort an array of 0s, 1s and 2s

// Brutefore : use any of the sorting algorithm

// Better Approach (The Count Method )
// TC O(2N)
void sort1(int arr[], int n)
{
    int cnt_0 = 0;
    int cnt_1 = 0;
    int cnt_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cnt_0++;
        else if (arr[i] == 1)
            cnt_1++;
        else
            cnt_2++;
    }
    for (int i = 0; i < cnt_0; i++)
        arr[i] = 0;
    for (int i = cnt_0; i < cnt_0 + cnt_1; i++)
        arr[i] = 1;
    for (int i = cnt_0 + cnt_1; i < n; i++)
        arr[i] = 2;
}

// Optimal Approach "Dutch National Flag Algotrithm"
void sort2(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    // cout<<"Enter the size of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort2(arr, n);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}
