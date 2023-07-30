//find the secound largest number in an array
#include <iostream>
using namespace std;
int MaxNumber(int n, int arr[]){
int Max = INT_MIN;
int maxindex;
for (int i = 0; i<n; i++){
        if (arr[i]>Max){
            Max = arr[i];
          maxindex=i;
        }
}
return maxindex;
}
int main(){
int n = 6;
int Max;
int arr[n] = {1, 6, 6, 6, 2, 5};

int maxindex=MaxNumber(n,arr);
int BadaIndex=arr[maxindex];

for (int i = 0 ; i<n; i++){
    if (arr[i]==BadaIndex){
        arr[i]=-1;
    }
}

maxindex=MaxNumber(n,arr);
cout<<"Index: "<<maxindex<<endl;;
cout<<"Value: "<<arr[maxindex];

}