#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int a , k , b;
    cin >> a >> k >> b;
    if(a+b==k+b){
        if((b)%2)
            cout << "First";
        else
            cout << "Second";
    }
    if(a+b>k+b){
        cout << "First";
        return;
    }
    if(k+b>a+b){
        cout << "Second";
        return;
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