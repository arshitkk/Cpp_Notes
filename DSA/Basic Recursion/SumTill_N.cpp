#include <iostream>
using namespace std;
//! Parameterized Way 1 
int cnt = 0;
int SumPW1(int i, int n)
{
    if (i > n)
    {
        return -1;
    }
    cnt += i;
    SumPW1(i + 1, n);
    return cnt;
}

//! Parameterized Way 2

void SumPW2(int i, int cnt)
{
    if (i < 1)
    {
        cout << cnt;
        return;
    }
    SumPW2(i - 1, cnt + i);
}

//! Functional Way
int SumFW(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + SumFW(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << "PW1: " << SumPW1(1, n) << endl;
    cout << "PW2: ";
    SumPW2(n, 0);
    cout << endl
         << "FW: " << SumFW(n);
}
