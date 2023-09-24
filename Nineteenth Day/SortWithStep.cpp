#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin >> n;
    int k ;
    cin >> k;
    int arr[n];
    for(int i = 0 ; i < n; i++) cin >> arr[i];
    int count = 0;
    for(int i = 0 ; i < n; i++){
        if(abs((i+1)-arr[i])%k!=0)
            count++;
    }
    if(count==0)
        cout << 0;
    else if(count == 2)
        cout << 1;
    else
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