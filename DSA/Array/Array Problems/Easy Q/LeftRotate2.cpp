#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Bruteforce
// TC = O(n+d)
// SC = O(d)
void rotateB(int arr[], int n, int k)
{
    int temp[n];
    // copying k element to temp
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    // Shift element
    for (int i = 0; i < n - k; i++)
    {
        arr[i] = arr[k + i];
    }
    // temp element to main arr
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - k - 1];
    }
}

// Optimal
 void rotateO(int arr[], int n, int k){
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);

 }

int main()
{
    int n, k;
    // cout<<"Enter the size of an array: ";
    cin >> n;
    int arr[n];

    // cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;

    rotateO(arr, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}