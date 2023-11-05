#include <iostream>
using namespace std;
// BruteForce Approach

bool Sort1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                return false;
            }
        }
    }
    return true;
}

// optimal- single traveresal

bool Sort2(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
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
    int sort = Sort1(arr, n);

    if (sort == 1)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}