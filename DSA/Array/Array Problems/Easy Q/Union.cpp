#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Bruteforce
// TC = O(n1 + n2)
// SC = O(n1 + n2)
std::set<int> Union1(int arr1[], int arr2[], int n1, int n2)
{
    std::set<int> s;
    for (int i = 0; i < n1; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        s.insert(arr2[i]);
    }
    return s;
}

// Optimal Approach
std::vector<int> Union2(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0;
    int j = 0;
    std::vector<int> v;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            if (v.empty() || v.back() != arr1[i])
            {
                v.push_back(arr1[i]);
            }
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            if (v.empty() || v.back() != arr1[i])
            {
                v.push_back(arr1[i]);
            }
            i++;
            j++;
        }
        else
        {
            if (v.empty() || v.back() != arr2[j])
            {
                v.push_back(arr2[j]);
            }
            j++;
        }
    }

    // If there are remaining elements in either array, add them to the vector
    while (i < n1)
    {
        if (v.empty() || v.back() != arr1[i])
        {
            v.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (v.empty() || v.back() != arr2[j])
        {
            v.push_back(arr2[j]);
        }
        j++;
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

    std::set<int> s = Union1(arr1, arr2, n1, n2);
    std::vector<int> v = Union2(arr1, arr2, n1, n2);

    cout << "Union1: ";
    for (auto it : s)
    {
        cout << it << " ";
    }

    cout << "\nUnion2: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
}
