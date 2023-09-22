#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n , k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i = 0 ; i < n; i++) cin >> v[i];
    sort(v.rbegin(),v.rend());
    vector<int>s(k);
    for(int i = 0 ; i < k; i++) cin >> s[i];
    sort(s.begin(),s.end());
    int idx = 0;
    int res = 0;
    int j = k;
    int y = 0;
    while(k--){
        int x = s[y]-1;
        // cout << s[y] << " ";
        y++;
        int minn = INT_MAX;
        int maxx = INT_MIN;
        maxx = max(maxx,v[idx]);
        minn = min(minn,v[idx]);
        // cout << v[idx] << " ";
        idx++;
        while(x--){
            // cout << v[j] << " ";  
            maxx = max(maxx,v[j]);
            minn = min(minn,v[j]);
            j++;
        }
        // cout << endl;
        res+= maxx+minn;
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