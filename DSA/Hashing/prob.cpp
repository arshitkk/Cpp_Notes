//! Show Highest and Lowest frequency 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   map<int, int> mpp;

   for (int i = 0; i < n; i++)
   {
      mpp[arr[i]]++;
   }

   int MinFreq = INT_MAX;
   int MaxFreq = INT_MIN;
   int MaxValue = INT_MIN;
   int MinValue = INT_MAX;
   for (auto it : mpp)
   {
      if (it.second > MaxFreq)
      {
         MaxValue = it.first;
         MaxFreq = it.second;
      }
      else if (it.second < MinFreq)
      {
         MinValue = it.first;
         MinFreq = it.second;
      }
   }
   cout << "Max: " << MaxValue << "-->" << MaxFreq << endl
        << "Min: " << MinValue << "-->" << MinFreq << endl;
}
