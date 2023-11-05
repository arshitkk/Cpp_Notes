#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    // Hashing
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++; // 26 chars
/*  s[i]-'A" --> if having all Uppercase(26 chars)
    if dont know about the char you can do "s[i]" (256 char)
*/
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}