#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n; 
    cin >> n;
    vector<int>v(n+1,0);
    cout << 1 << " ";
    for(int i =2 ; i <= n/2;i++){
        if(!v[i]){
            v[i] = 1;
            int j = i;
            while(j<=n){
                cout << j << " ";
                v[j] = 1;
                j = j*2;
            }
        }
    }
    for(int i = 2 ; i <= n;  i++)
        if(v[i]==0)
            cout << i << " "; 
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