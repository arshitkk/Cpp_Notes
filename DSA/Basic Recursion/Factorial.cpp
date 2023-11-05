#include <iostream>
using namespace std;
//! Parameterized Way 1
int cnt = 1;
int FactoPW(int i, int n)
{
    if (i > n)
    {
        return -1;
    }
    cnt = cnt * i;
    FactoPW(i + 1, n);
    return cnt;
}

//! Parameterized Way 1
void FactoPW2(int i, int cnt)
{
    if (i < 1)
    {
        cout << cnt;
        return;
    }
    FactoPW2(i - 1, cnt * i);
}

//! Functional Recursion
int FactoFW(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * FactoFW(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << "FactoPW: " << FactoPW(1, n) << endl;
    cout << "FactoPW2: ";
    FactoPW2(n, 1);
    cout << endl
         << "FactoFW: " << FactoFW(n);
}