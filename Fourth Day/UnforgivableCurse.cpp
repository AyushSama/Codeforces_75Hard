#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

void helper(string s , string t , int n , int idx , int k ,bool& f){
    if(idx>=n){
        if(s==t){
            f = true;
        }  
        return;
    }
    if(f)
        return;
    if (idx + k < n) {
        swap(s[idx], s[idx + k]);
        helper(s, t, n, idx + 1, k, f);
        swap(s[idx], s[idx + k]); // Backtrack
    }
    if (idx + k + 1 < n) {
        swap(s[idx], s[idx + k + 1]);
        helper(s, t, n, idx + 1, k, f);
        swap(s[idx], s[idx + k + 1]); // Backtrack
    }
    helper(s,t,n,idx+1,k,f);
}

void solve(){
    int n; 
    cin >> n;
    int k ;
    cin >> k;
    string s , t;
    cin >> s >> t;
    bool f = false;
    helper(s,t,n,0,k,f);
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
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}