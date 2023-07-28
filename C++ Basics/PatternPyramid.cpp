#include<iostream>
using namespace std;
int main () {

int n;
cin >> n;

/* PATTERN #1:
    *
   **
  ***
 ****
*****
*/
 for (int i = n; i >0; i--){
    for (int j = 1; j <= n; j++){
        if (i>=j){
            cout << " ";
        }
        else {
            cout << " *";
        }
    }
    cout << endl;
}
//------------------------------------------------
/* PATTERN #2:
*****
 ****
  ***
   **
    *
*/
// -----------------------------------------------
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
   
   
   
    return 0;
}