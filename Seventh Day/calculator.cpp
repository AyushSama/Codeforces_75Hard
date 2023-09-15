#include<bits/stdc++.h>
using namespace std;

int main (){
    int arr[] = {7,8,6,5,4,4,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int xorr = 0;
    for(int i = 0 ; i < n; i++) {
        xorr = xorr^arr[i];
    }
    cout << xorr ;
    return 0 ;
}