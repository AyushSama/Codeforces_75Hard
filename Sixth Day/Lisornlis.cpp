#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i=1;i<=n;++i) {
    	int x;
    	cin >> x;
    	++mp[x];
    }
    int single = 0, doble = 0;
    for(auto &[i, j]:mp) {
    	single += j == 1;
    	doble += j > 1;
    }
    cout << doble + (single + 1) / 2;

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