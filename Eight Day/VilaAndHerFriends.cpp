#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    int x , y;
    cin >> x >> y;
    bool f = false;
    while(k--){
        int p , q;
        cin >> p >> q;
        if((x+y)%2==(p+q)%2)
            f = true;
    }
    if(f)
        cout << "NO";
    else
        cout << "YES";
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