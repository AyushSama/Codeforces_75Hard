#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n; 
    cin>>n;
    vector<int>dp(n);
    dp[0] = 0;
    dp[1] = 1;
    for(int i =2 ; i < n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<<dp[n-1];
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