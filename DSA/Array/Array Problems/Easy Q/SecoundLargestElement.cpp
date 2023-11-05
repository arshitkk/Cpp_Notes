#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Bruteforce (Only Works After array is sorted and no duplicates )
void SecondLargest1(int arr[],int n)
{
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
    sort(arr,arr+n);
    int small=arr[1];
    int large=arr[n-2];
    cout<<"Second smallest is "<<small<<endl;
    cout<<"Second largest is "<<large<<endl;
}

// Better

int SecondLargest2(int arr[], int n)
{
    int max = INT_MIN;
    int SecLargest = INT_MIN;
    // find the Max Element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // Find the element which is less than Largest
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > SecLargest && arr[i] != max)
        {
            SecLargest = arr[i];
        }
    }
    return SecLargest;
}

// Optimal Approach
int SecondLargest3(int arr[], int n)
{
    //initialize largest and sLargest 
    int largest = arr[0];
    int sLargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i];
        }
    }
    return sLargest;
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
    cout << SecondLargest3(arr, n);
}