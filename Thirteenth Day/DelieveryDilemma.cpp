#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int helper(int idx,int n,int a[],int b[]){
    if(idx>=n)
        return 0;
    int ans = 0;
    ans = min(b[idx]+helper(idx+1,n,a,b),max(a[idx],helper(idx+1,n,a,b)));
    return ans;    
}

void solve(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i = 0 ; i < n; i++) cin >> a[i];
    for(int i = 0 ; i < n; i++) cin >> b[i];
    cout << helper(0,n,a,b);    
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