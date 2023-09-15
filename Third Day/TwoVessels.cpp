#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int a , b, c;
    cin >> a >> b >> c;
    float res = 0 ;
    float sum = a+b;
    float req = sum/2;
    float diff = abs(float(b-req));
    // cout << req << " " << diff << " " << float(diff/c) << " " ;
    res+= ceil(diff/c);
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