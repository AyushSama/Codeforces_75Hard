#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int helper(int n , vector<int>v ){
    if(n==0)
        return 1;
    int ways = 0;
    for(auto x : v){
        if(n-x>=0)
            ways+= helper(n-x,v);
    }
    return ways;
}

void solve(){
    int n;
    cin >> n;
    int k ;
    cin >> k;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++) cin >> v[i];
    cout << helper(k,v);
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