#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Find longest subarray with given sum K (POSITIVE+NEGATIVE)
// BRUTEFORCE Approach (all posible subarray's sum) - Using three loops
// TC = O(n^3)
int LongestSubArray1(vector<int> &arr, long long K)
{
    int len;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            long long sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
            }
            if (sum == K)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}

// BETTER Approach (same as above, but using two loops)
// TC = O(n^2)
int LongestSubArray2(vector<int> &arr, long long K)
{
    int len;
    for (int i = 0; i < arr.size(); i++)
    {
        long long sum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            sum = sum + arr[j];

            if (sum == K)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}
// Optimal Approach(using Hash Map)

// TC =  O(N) -> if using unorder map, O(NlogN) if using ordered
int LongestSubArray3(vector<int> &arr, int k)
{
    map<int, int> preSumMap; // map nitialize karenge
    int sum = 0;             // sum jo addition karega
    int maxLen = 0;          // maximum length store karega
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        // agar sum = k ho jaye to length(len) ko update kardo
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        int rem = sum - k; // sum-k karega
                           /* agar rem pehle se hi map mein hai toh yeh uski
                           length calulate karega and update karega agar existing
                           length se iski length badi hui toh
                           */
        if (preSumMap.find(rem) != preSumMap.end())
        {
            /*
            preSumMap.find(rem): Yeh dekhta hai ki kya rem
                                 map mein already exist karta hai ya nahi.
            preSumMap.end(): Yeh map ke end iterator ko represent karta hai.

            agar "rem" pehle se map mein hai toh  "preSumMap.find(rem)"
            jo hai wo "end iterator(preSumMap.end())" return nahi karega
            balki wo rem jis index pe pehle se hai wo index return karega
            hence "!="
            aur agar pehle se nahi hai toh "==" hai!
            */
            int len1 = i - preSumMap[rem]; // length calculate karega
            maxLen = max(maxLen, len1);
        }
        /* agar map mein rem pehle se nahi hai toh usko store karenge
        map(preSumMap) mein

        (below if statement will help to allowed negative numbers)
        */
        if (preSumMap.find(rem) == preSumMap.end())
        {
            preSumMap[rem] = i;
        }
    }
    return maxLen;
}

int main()
{
    int n, k;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cin >> k;

    cout << LongestSubArray3(arr, k);

    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    return 0;
}
