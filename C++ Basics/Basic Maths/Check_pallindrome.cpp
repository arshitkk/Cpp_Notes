#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;

    int rev = 0;

    while (n > 0)
    {
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    }
    if (rev == temp)
    {
        cout << "Yes! its a Pallindrome";
    }
    else
    {
        cout << "No! its not a Pallindrome";
    }

    return 0;
}