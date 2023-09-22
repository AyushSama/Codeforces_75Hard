#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int helper(int idx,int n,string s,set<char>st,int k,string temp){
    if(idx>=n){
        if(st.size()==k){
            cout << temp << " ";
            return temp.size();
        }
        else    
            return 0;
    }
    int res = INT_MIN;
    for(int i = idx ; i < n; i++){
        st.insert(s[i]);
        temp.push_back(s[i]);
        res = max(res,helper(i+1,n,s,st,k,temp));
        temp.pop_back();
        auto it = st.find(s[i]);
        st.erase(it);
    }
    return res;
}

void solve(){
    string s;
    cin >> s;
    int k;
    cin >> k;
    int n = s.size();
    cout << helper(0,n,s,{},k,"");
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