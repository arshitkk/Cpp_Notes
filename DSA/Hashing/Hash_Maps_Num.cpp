#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    // YOU CAN ALSO PRE-COMPUTE WHEN TAKING INPUT
    //    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // mpp[arr[i]]++;
  
    }
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

for(auto it : mpp){
    cout<<it.first<<"->"<<it.second<<endl;
}

//it stores in a Sorted order here is the proof,


//     int q;
//     cin >> q;

//     while (q--)
//     {
//         int num;
//         cin >> num;
//         cout << mpp[num] << endl;
//     }
}