#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int endodeString(int n , string s){
    string res = "";
    for(auto x : s){
        int diff = x-'A'+1;
        if(diff<10)
            res+= to_string(diff) + "0";
        else if(x-'A'+1<20)
            res+= to_string(diff) + to_string((x-'A'+1)%10);
        else
            res+= to_string(diff) + to_string((x-'A'+1)%7);
    }
    return stoi(res);
}

void solve(){
    string s = "ABJZ";
    cout << endodeString(s.size(),s);
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