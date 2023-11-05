// TC O (NlogN)
// SC O(N)
#include <iostream>
#include <vector>
using namespace std;
// Merging Algorithm
void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int left = low;      // Left side of the Array
    int right = mid + 1; // Right side of the Array

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;      
             }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    // putting the temp array to the original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
// Main Al-gorithm
void mergesort(int arr[], int low, int high)
{
    int mid = ((low + high) / 2);
    if (low >= high)
    {
        return;
    }
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
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

    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}