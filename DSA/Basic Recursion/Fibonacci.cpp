#include <iostream>
using namespace std;
int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    //     int first = fib(n-1);
    //     int last = fib(n-2);
    //    return (first + last);
    return (fib(n - 1) + fib(n - 2));
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}