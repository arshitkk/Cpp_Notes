//?Recusrsion is when a function call itself until, a specified condition is met
#include <iostream>
using namespace std;
int c = 0;
void print()
{
    cout << "1";
    print(); // the fuciton will call it self and
    // theres no condition attached to it so it is an infinite recursion.
}
void count()
{
    if (c == 3)
    { // Base condition
        return;
    }
    cout << c << endl;
    c++;
    count();
}

int main()
{
    // print(); //infinite Recursion
    count();
}