#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    map<char, int> mpp;
    for (int i = 0; i < str.size(); i++)
    {
        mpp[str[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << mpp[c] << endl;
    }

    // Map --> O(log n)
    // unordered_Map --> O(1), [O(n) has a very very rare chance] 
//first pref should be Un..Map, use map only if time limit exceed

//u cant take a pair to be a key in unorder map but in map u can do

}