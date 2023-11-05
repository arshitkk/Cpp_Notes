#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Max1(vector<int> &arr, int n)
// Count Maximum Consecutive One’s in the array
{
    int max = 0;
    // int i = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {

            count++;
        }
        else
        {
            count = 0;
        }

        if (count >= max)
        {
            max = count;
        }
    }
    return max;
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

    cout << Max1(arr, n);

    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    return 0;
}
