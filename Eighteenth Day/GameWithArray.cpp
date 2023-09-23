#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin >> n;
    int s;
    cin >> s;
    if(s<2*n){
        cout << "NO";
    }   
    else{
        cout << "YES" << endl;
        int temp = n-1;
        while(temp--){
            cout << 1 << " ";
        }
        cout << s-(n-1) << endl << n;
    }
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