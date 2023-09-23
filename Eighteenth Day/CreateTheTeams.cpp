#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int>arr(n);
    int count = 1;
    for(int i = 0 ; i < n; i++) cin >> arr[i];
    sort(arr.rbegin(),arr.rend());
    int res = 0;
    for(int i = 0 ; i < n; i++){
        if(arr[i]*count>=k){
            res++;
            count = 1;
        }
        else{
            count++;
        }
    }
    cout << res;
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