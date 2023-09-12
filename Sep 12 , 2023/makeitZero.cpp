#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin >> n;
    int arr[n] ;
    for(int i = 0 ; i < n; i++) cin >> arr[i];
    int xorr = 1;
    bool f = false;
    int pos ;
    for(int i = 0 ; i < n; i++) {
        xorr = xorr^arr[i];
        if(arr[i]==0){
            f = true;
            pos = i+1;
        }
    }
    xorr^=1;
    if(xorr ==0 ){
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n;
    }
    else if(n%2==0){
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n;
    }
    else{
        cout << 4 << endl;
        cout << 1 << " " << n << endl;
        cout << 2 << " " << n << endl;
        cout << 1 << " " << n-1 << endl;
        cout << 1 << " " << n-1 ;
    }
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}