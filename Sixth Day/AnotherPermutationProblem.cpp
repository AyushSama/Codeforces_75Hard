#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin >> n;
    if(n==2){
        cout << 2;
        return;
    }
    int res = INT_MIN;
    for(int i = 1 ; i <= n ;i++){
        int del = 0;
        int sum = 0;
        int count = 1;
        for(int j = 1 ; j<=i; j++){
            sum+= j*count;
            del = max(del,j*count);
            count++;
            // cout << j << " ";
        }
        // cout << "-> "; 
        for(int j = n; j>i ;j--){
            sum+= j*count;
            del = max(del,j*count);
            count++;
            // cout << j << " ";
        }
        res = max(res,sum-del);
        // cout << "->> " <<sum-del ;
        // cout << endl;
    }
    cout << res;
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