#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    string s ;
    cin >> s;
    string t;
    cin >> t;
    bool found = 0;
    for(int i = 0 ; i < s.size()-1 ; i++){
        if(s[i]=='0' && s[i+1]=='1' && t[i]=='0' && t[i+1]=='1'){
            found = 1;
            break;
        }
    }
    if(found)
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
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}