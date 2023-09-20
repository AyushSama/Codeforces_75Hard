#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n , m , k , l;
    cin >> n >> m >> k >> l;
    if(m>n){
        cout << -1;
        return;
    }
    int maxx = n/m;
    int low = 1;
    int high = maxx;
    int ans = -1 ;
    while(low<=high){
        int mid = (low+high)/2;
        if(((mid*m)-k)>=l){
            ans = mid;
            high = mid-1;
        }
        else
            low = mid+1;
    }
    // for(int i = 1 ; i <= maxx; i++){
    //     if(((i*m)-k)>=l){
    //         cout << i;
    //         return;
    //     }
    // }
    cout << ans ;
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}