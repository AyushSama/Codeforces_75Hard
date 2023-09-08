#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n , a , b;
    cin >> n >> a >> b;
    int x = n/a;
    int y = n/b;
    int diff = n-x;
    int xsum = n*(n+1)/2 - diff*(diff+1)/2;
    int common = 0 ;
    int min_ab = min(a, b);
    for (int i = 1; i <= min_ab; i++) {
        if (a % i == 0 && b % i == 0) {
            common++;
        }
    }
    cout << common << " ";
    int ysum=0;
    diff = x-common;
    ysum+= (diff*(diff+1))/2;
    while(common--){
        ysum+= n-x+1;
        x--;
    }
    
    // cout << xsum << " " << ysum << " ";
    cout << xsum-ysum;
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