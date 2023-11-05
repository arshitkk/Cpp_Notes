#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Optimal
//TC = O(n), SC = O(1)
void rotate(int arr[], int n){
int temp = arr[0];
for (int i = 0; i<n; i++){
    arr[i-1] = arr[i];
    }
    arr[n-1]=temp;
 
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
    rotate(arr, n);


    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}