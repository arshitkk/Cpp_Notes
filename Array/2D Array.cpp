#include <iostream>
using namespace std;
int main () {
int n, m;
int arr[n][m];

for (int i = 0; i<n; i++){
    for (int j = i; j<n; j++){
        cin>>arr[i];
    }
}

for (int i = 0; i<n; i++){
    for (int j = i; j<n; j++){
       cout<<arr[i][j];
    }
    cout<<endl;
}




    return 0;
}