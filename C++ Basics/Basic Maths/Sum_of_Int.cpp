#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int Sum;
    while (num != 0)
    {
        int digit = num % 10; //gives last digit 
        Sum += digit;
        num = num / 10; // remove the last digit from the input
    }
    cout << Sum;

    return 0;
}