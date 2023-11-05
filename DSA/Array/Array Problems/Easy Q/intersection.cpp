#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Bruteforce
// TC = O(n+d)
// SC = O(d)
vector<int> inters(int arr1[], int arr2[], int n1, int n2)
{
    int visited[n2] = {0};
    vector<int> v;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j] && visited[j] == 0)
            {
                v.push_back(arr1[i]);
                visited[j] = 1;
                break;
            }
            if (arr1[i] > n1)
            {
                break;
            }
        }
    }

    return v;
}

// Optimal Approach

vector<int> inters2(int arr1[], int arr2[], int n1, int n2){
    int i = 0 ;
    int j = 0;
    vector<int> v;
    while (i<n1 && j<n2){
        if (arr1[i]<arr2[j]){
            i++;
        }
        else if (arr2[j]<arr1[i]){
            j++;
        }
        else{
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return v; 
}
int main()
{
    int n1, n2;

    cin >> n1;
    cin >> n2;

    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    std::vector<int> v = inters2(arr1, arr2, n1, n2);
    for (auto it : v)
    {
        cout << it << " ";
    }
}
