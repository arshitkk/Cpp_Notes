#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count;
    while (n != 0)
    {
        int digit = n % 10; //its not neccesary
        count++;
        n = n / 10;
    }

    cout << count;

    return 0;
}


//!another 
/* #include<bits/stdc++.h>
int count = (int) (log10(n)+1);

//!if iterations is based on divisible the time complexity has log in it 
//? the time complexity of this is log10(n) (cuz it was n/10)