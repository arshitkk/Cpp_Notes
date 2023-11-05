#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Bruteforce Approach
/*

Sort the Array and then Return the last Index

*/

int LargestElement1(vector<int>&arr, int n) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}


// Optimal
/*

Create a Largest variable and initialize it with arr[0].
Use a for loop and compare it with other elements of the array
If any element is greater than the max value, update max value with the element’s value
Print the Largest variable.

*/

int LargestElement2(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
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
    cout << LargestElement2(arr, n);
}