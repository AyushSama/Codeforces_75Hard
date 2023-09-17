#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

void helper(int n, int m, int& res, int count, int limit) {
    if (n <= 0 || count >= limit) {
        return; // Base case for invalid input or excessive recursion
    }
    if (n == m) {
        res = min(res, count);
        return;
    }
    if (n > m) {
        helper(n - 1, m, res, count + 1, limit);
    } else {
        helper(n * 2, m, res, count + 1, limit);
        helper(n - 1, m, res, count + 1, limit);
    }
}


void solve(){
    int n , m;
    cin >> n >> m;
    if(n>=m){
        cout << n-m;
        return;
    }
    int res = 1e4+1;
    helper(n,m,res,0,2*m);
    cout << res;
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