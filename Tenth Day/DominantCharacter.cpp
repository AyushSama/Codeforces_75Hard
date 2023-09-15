#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s.find("aa")!=string::npos){
        cout << 2 ;
        return;
    }
    if(s.find("aba")!=string::npos || s.find("aca")!=string::npos){
        cout << 3 ;
        return;
    }
    if(s.find("abca")!=string::npos || s.find("acba")!=string::npos){
        cout << 4 ;
        return;
    }
    if(s.find("abbacca")!=string::npos || s.find("accabba")!= string::npos){
        cout << 7 ;
        return;
    } 
    cout << -1;
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