#include <iostream>
using namespace std;

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
//! Method 1 
    // for(int i = 0; i<n-1; i++){
    //     for (int j = i+1; j<n; j++){
    //         if (arr[j]<arr[i]){
    //             int temp=arr[j];
    //             arr[j]=arr[i];
    //             arr[i] = temp;

    //         }
    //     }
    // }

//! Method 2 

    // for (int i = 0; i < n - 1; i++)
    // {
    //     int min = i;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] < arr[min])
    //         {
    //             min = j;
    //         }

    //     }

    //      int temp = arr[min];
    //         arr[min] = arr[i];
    //         arr[i] = temp;
    // }

//! Method 3 (decreasing Order)
  int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<len-1; i++){
        int max=i;
        for (int j=i; j<len; j++){
            if (arr[j]<arr[max]){
                max = j;
            }
        }
        int temp = arr[max];
        arr[max]=arr[i];
        arr[i]=temp;
    }

//! Method 3 (Increasing Order)

    // for (int i = 0; i < n - 1; i++)
    // {
    //     int min = i;
    //     for (int j = i; j < n; j++)
    //     {
    //         if (arr[j] < arr[min])
    //         {
    //             min = j;
    //         }
    //     }
    //       int temp = arr[min];
    //         arr[min] = arr[i];
    //         arr[i] = temp;
    // }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// 0(n^2) Best, worst and avg