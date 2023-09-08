#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n , m;
    cin >> n >> m;
    int arr[n+1];
    int left = n;
    int right = 1;
    map<int,int>mp;
    for(int i = 1 ; i <= n; i++){
        cin >> arr[i];
        if(arr[i]>0){
            mp[arr[i]] = i;
            left = min(left,arr[i]);
            right = max(right,arr[i]);
        }
    }
    for(int i = 1 ; i<=n ; i++){
        if(arr[i] < 0)
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