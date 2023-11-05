#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// bruteforce method
int rem(int arr[], int n)
{
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int size = st.size();
    int index = 0;
    for (auto it : st)
    {
        arr[index] = it;
        index++;
    }
    return size;
}

//Optimal approach
int rem2(int arr[], int n){
    int i = 0;
    for(int j =0; j<n; j++){
        if (arr[i] != arr[j]){
            i++;
            arr[i]=arr[j];

        }
    }
    return  i+1;
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
    int k = rem(arr, n);
    int l = rem2(arr, n);

    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
}