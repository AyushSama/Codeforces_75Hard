#include<bits/stdc++.h>
using namespace std;

int main (){
    int arr[] = {8,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int xorr = 0;
    for(int i = 0 ; i < n; i++) {
        xorr = xorr^arr[i];
    }
    cout << xorr ;
    return 0 ;
}