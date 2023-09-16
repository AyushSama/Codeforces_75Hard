#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n , k;
    cin >> n >> k;
    vector<vector<int>>v(n,vector<int>(n));
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n ;j ++)
            cin >> v[i][j];
    }   
    bool f = false;
    int arr[2] = {0};
    int count = 0;
    for(int j =0 ; j < n/2;j++){
        for(int i =0 ; i < n; i++){
            if(i==n/2)
                continue;
            if(v[i][j]!=v[n-1-i][n-j-1]){
                count++;
                arr[v[i][j]]++;
            }
        }
    }
    if(k>=n*n){
        cout << "YES";
        return;
    }
    // cout << count << " " << k;
    if(count<=k)
        f = true;

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