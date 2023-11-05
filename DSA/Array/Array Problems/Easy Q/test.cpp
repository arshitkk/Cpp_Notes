#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// bruteforce (all posible subarray's sum) 
// TC = O(n^3)
int LongestSubArray1(vector<int>&arr, long long K){
    int len;
    for(int i = 0; i<arr.size(); i++){
        for(int j = i; j<arr.size(); j++){
            long long sum = 0;
            for(int k = i; k<=j; k++){
                sum = sum+arr[k];
            }
            if (sum == K){
                len = max(len, j-i+1);
            }
        }
    }
    return len;
}

// bruteforce (same as above) 
// TC = O(n^2)
int LongestSubArray2(vector<int>&arr, long long K){
    int len;
    for(int i = 0; i<arr.size(); i++){
            long long sum = 0;
        for(int j = i; j<arr.size(); j++){
                sum = sum+arr[j];

            if (sum == K){
                len = max(len, j-i+1);
            }
        }
    }
    return len;
}


int main()
{
    int n,k;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cin>>k;

    cout << LongestSubArray2(arr, k);

    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    return 0;
}
