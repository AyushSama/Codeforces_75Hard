#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    string s;
    cin >> s;
    int n = s.size();
    bool f = true;
    for(int i = 2 ; i < n; i++){
        if(s[i]-'A' != (s[i-1]-'A' + s[i-2]-'A')%26)
            f = false;
    }
    if(f)
        cout << "YES";
    else
        cout << "NO";
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}