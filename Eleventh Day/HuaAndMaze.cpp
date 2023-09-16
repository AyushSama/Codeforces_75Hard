#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n , m;
    cin >> n >> m;
    int t = 2;
    int res = 5;
    while(t--){
        int x , y;
        cin >> x >> y;
        if(x==1 && y==1 || x==n && y==1 || x==1 && y==m || x==n && y==m){
            res = min(res,2LL);
            continue;
        }
        if(y==1 || x==1 || y==m || x==n){
            res = min(res,3LL);
            continue;
        }
        res = min(res,4LL);
    }
    cout << res ;
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