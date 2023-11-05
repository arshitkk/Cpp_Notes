#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Bruteforce
// TC = O(n+d)
// SC = O(d)
int missing1(vector<int>&arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
    return -1;
}

// Better Approach using Hashing
int missing2(vector<int>&arr, int n){
    int hash[n+1]={0};
    for(int i = 0; i<n-1; i++){
        hash[arr[i]]++;
    }
    for(int i = 1; i<=n; i++){
        if (hash[i]==0){
            return i;
        }
    }
    return -1;
}

// Optimal Solution (sum)
 int missing3( vector<int>&arr, int n){
     int sum = n*(n+1)/2;
     int sum2 = 0;

     for (int i = 0; i<n-1; i++){
        sum2=sum2+arr[i];
     }
     return sum-sum2;
 }

// Optimal Solution (XOR)
int missing4(vector<int>&arr, int n){
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i<n-1; i++){
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
    }
    xor1=xor1^n;
    return xor1^xor2;
}


int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }

    cout << missing4(v, n - 1);

    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    return 0;
}
