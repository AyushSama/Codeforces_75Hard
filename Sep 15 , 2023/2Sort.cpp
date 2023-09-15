#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ok[n];
	for (int i = 0; i < n - 1; i++) {
		ok[i] = (a[i] < 2 * a[i + 1]);
	}
	int tot = 0;
	for (int i = 0; i < k; i++) {
		tot += ok[i];
	}
	int res = 0;
	if (tot == k) {res++;}
	for (int i = k; i < n - 1; i++) {
		tot += ok[i];
		tot -= ok[i - k];
		if (tot == k) {res++;}
	}
	cout << res ;
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