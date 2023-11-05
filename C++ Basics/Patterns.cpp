#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    //!------------------------------------------------

    /* PATTERN #1:
     *
     **
     ***
     ****
     *****
     */
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                cout << " ";
            }
            else
            {
                cout << " *";
            }
        }
        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #2:
    *****
    ****
    ***
    **
    *
    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= j)
            {
                cout << " *";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #3:
     *
     **
     ***
     ****
     *****
     */

    for (int i = n; i >= 0; i--)
    {

        for (int j = i; j < n; j++)
        {

            cout << "*";
        }

        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #4:
    *****
    ****
    ***
    **
    *
    */

    for (int i = n; i >= 0; i--)
    {

        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #5
    1
    22
    333
    4444
    55555
    */

    int num = 1;
    for (int i = n; i >= 1; i--)
    {

        for (int j = i; j <= n; j++)
        {

            cout << num;
        }
        num++;
        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #6:
    1
    12
    123
    1234
    12345
    */

    for (int i = n; i >= 1; i--)
    {
        int num = 1;
        for (int j = i; j <= n; j++)
        {

            cout << num;
            num++;
        }

        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #7:
    A
    AB
    ABC
    ABCD
    ABCDE
    */

    for (int i = n; i > 0; i--)
    {
        char num = 'A';
        for (int j = i; j <= n; j++)
        {
            cout << num;
            num++;
        }

        cout << endl;
    }
    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #8:
    A
    BB
    CCC
    DDDD
    EEEEE
    */

    char num = 'A';
    for (int i = n; i > 0; i--)
    {

        for (int j = i; j <= n; j++)
        {

            cout << num;
        }
        num++;
        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #9:
    A
    A B
    A B C
    A B C D
    A B C D E
    */

    for (int i = 0; i <= n; i++)
    {

        for (int j = 0; j < i; j++)
        {
            char num = 'A' + j;
            cout << num << " ";
        }

        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #10:
    A B C D E
    A B C D
    A B C
    A B
    A
    */

    for (int i = n; i > 0; i--)
    {

        for (int j = 0; j < i; j++)
        {
            char num = 'A' + j;
            cout << num << " ";
        }

        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #11:
     *
     ***
     *****
     *******
     *********
     */

    for (int i = 0; i < n; i++)
    {

        // Spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < ((2 * i) + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #12:
    ***********
    *********
    *******
    *****
    ***
    *
    */
    for (int i = n; i >= 0; i--)
    {

        // Spaces
        for (int j = 0; j < n; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < ((2 * i) + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #13:
     *
     ***
     *****
     *******
     *********
     ***********
     *********
     *******
     *****
     ***
     *
     */

    // Upper Pattern
    for (int i = 0; i < n; i++)
    {

        // Spaces
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < ((2 * i) + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower Pattern
    for (int i = n; i >= 0; i--)
    {

        // Spaces
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < ((2 * i) + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #14:
    1
    01
    101
    0101
    10101

    */
    int start2 = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start2 = 1;
        }
        else
        {
            start2 = 0;
        }
        for (int j = 0; j <= i; j++)
        {

            cout << start2;
            start2 = 1 - start2;
        }
        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #15:

    1      1
    12    21
    123  321
    12344321

    */

    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // spaces
        for (int j = 1; j <= ((n - i) * 2); j++)
        {
            cout << " ";
        }
        // rev numbers
        for (int j = 1; j <= i; j++)
        {
            cout << i - (j - 1);
        }
        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #16:

         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA

    */

    for (int i = 0; i < n; i++)
    {
        // Spaces
        for (int j = (n - i) - 1; j >= 0; j--)
        {
            cout << " ";
        }
        // Chars
        char a = 'A';
        char b = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << a;
            a++;
        }
        // Rev Char
        for (int k = 0; k <= i - 1; k++)
        {
            b = ('A' + i) - k - 1;
            cout << b;
            // b++;
        }
        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #17:
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    ****  ****
    ***    ***
    **      **
    *        *

    */

    for (int i = 1; i < n; i++)
    {
        // Upper---

        // Stars(left)
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        // spaces(center)
        for (int j = ((2 * n) - i) - i; j >= 1; j--)
        {
            cout << " ";
        }
        // Stars(right)
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Lower
    for (int i = 1; i <= n; i++)
    {
        // Upper---

        // Stars(left)
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }

        // spaces(center)
        for (int j = ((2 * i) - 2); j >= 1; j--)
        {
            cout << " ";
        }
        // Stars(right)
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #18:

    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********

    */

    // Upper
    for (int i = 1; i <= n; i++)
    {

        // Stars(left)
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }

        // spaces(center)
        for (int j = ((2 * i) - 2); j >= 1; j--)
        {
            cout << " ";
        }
        // Stars(right)
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower
    for (int i = 1; i <= n; i++)
    {

        // Stars(left)
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        // spaces(center)
        for (int j = ((2 * n) - i) - i; j >= 1; j--)
        {
            cout << " ";
        }
        // Stars(right)
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #18:

    E
    DE
    CDE
    BCDE
    ABCDE

    */
    for (int i = 1; i <= n; i++)
    {
        char a = ('A' + n) - i;
        for (int j = 1; j <= i; j++)
        {

            cout << a;
            a++;
        }
        cout << endl;
    }

    //!------------------------------------------------

    //!------------------------------------------------

    /* PATTERN #18:

    *****
    *   *
    *   *
    *   *
    *****

    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}