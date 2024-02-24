#include <iostream>
#include <bits/stdc++.h>
using namespace std; // Two Sum : Check if a pair with given sum exists in Array
// Bruteforce Approach (linear Method)
// TC -> O(n^2)
vector<int> TwoSum(int arr[], int n, int k)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) == k)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
                break;
            }
        }
    }
    return {-1, -1};
}

// Better Approach
// TC O(nLogn)
vector<int> TwoSum2(int arr[], int n, int k)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int target = k - num;
        if (mpp.find(target) != mpp.end())
        {
            return {mpp[target], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

// Optimal Approach (slightly better or if map not allowed)
// TC O(n) & O(n Log n) for Sorting 
vector<int> TwoSum3(int arr[], int n, int k)
{
    int i = 0;
    int j = n-1;
    vector<int> ans;
    sort(arr, arr + n);

    while (i == n)
    {
        if ((arr[i] + arr[j]) > k)
        {
            j--;
        }
        else if ((arr[i] + arr[j]) < k)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return {-1, -1};
}
int main()
{
    int n;
    // cout<<"Enter the size of an array: ";
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> s = TwoSum(arr, n, k);
    for (auto it : s)
    {
        cout << it << " ";
    }
}
