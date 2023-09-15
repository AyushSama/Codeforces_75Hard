#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

void dfs(int node , vector<int>&dp , vector<int>&idx , vector<pair<int,int>>edge[]){
    for(auto it : edge[node]){
        if(dp[it.first]==0){
            dp[it.first] = dp[node] + (it.second<=idx[node]);
            idx[it.first] = it.second;
            dfs(it.first,dp,idx,edge);
        }
    }
}

void solve(){
    int n ;
    cin >> n;
    vector<pair<int,int>>edge[n+1];
    vector<int>dp(n+1,0);
    vector<int>idx(n+1,0);
    for(int i = 1 ; i < n;i++){
        int u , v;
        cin >> u >> v;
        edge[u].push_back({v,i});
        edge[v].push_back({u,i});
    }
    dp[1] = 1;
    dfs(1,dp,idx,edge);
    int res = 0;
    for(int i = 1 ; i <= n ; i++)
        res = max(res,dp[i]);
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