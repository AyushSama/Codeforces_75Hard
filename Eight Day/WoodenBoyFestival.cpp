#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int l = -1, r = 1e9;
        while (r - l > 1) {
            int m = (l + r) >> 1;
            int i = 0;
            while (i + 1 < a.size() && a[i + 1] - a[0] <= 2 * m) {
                ++i;
            }
            int j = n - 1;
            while (j - 1 >= 0 && a.back() - a[j - 1] <= 2 * m) {
                --j;
            }
            ++i; --j;
            if (i > j || a[j] - a[i] <= 2 * m) {
                r = m;
            } else {
                l = m;
            }
        }
        cout << r << "\n";
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