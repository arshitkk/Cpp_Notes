#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//!Move zeros to right


// Bruteforce
// TC = O(2n)
// SC = O(d)
void ZeroB(int arr[], int n)
{
    vector<int> temp;
    // non zeros to temp
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }

    // temp value back to arr
    for (int i = 0; i < temp.size(); i++)
    {
        arr[i] = temp[i];
    }

    // remaining values to zero
    for (int i = temp.size(); i < n; i++)
    {
        arr[i] = 0;
    }
}
// Optimal Approach

void ZeroO(int arr[], int n){
 int j = -1;
 for (int i = 0; i<n; i++){
    if (arr[i]==0){
        j=arr[i];
        break;
    }
  }

for(int i = j+1; j<n; j++){
    if (arr[i]!=0){
        swap(arr[j],arr[i]);
        j++;
    }
}
}

int main()
{
    int n;
    // cout<<"Enter the size of an array: ";
    cin >> n;
    int arr[n];

    // cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ZeroB(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
