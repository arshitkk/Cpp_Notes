#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
/* An Armstrong number is one whose sum of digits raised
 to the power three equals the number itself.
 For example, 371 is an Armstrong number because
  3^3 + 7^3 + 1^3 = 371.
  or
  1634 = (1^4 + 6^4 + 3^4 + 4^4)
  */
    int num;
    cin >> num;
    int temp= num;
    std::string temp1 =to_string(num);
    int Sum=0;

   
    int cntDigit =temp1.length();
    cout<<"count"<<cntDigit<<endl;
    while (num != 0)
    {
        int digit = num % 10; //gives last digit 
        Sum = Sum+(pow(digit,cntDigit));

        num = num / 10; // remove the last digit from the input
    }
    if (temp==Sum){
        cout<<"Yes! its an Armstrong Number.";
    }
    else {
        cout<<"No! its not an Armstrong Number.";
    }
    cout << Sum;

    return 0;
}