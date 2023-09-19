#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int func(int a , int b){
    return a+b;
}

void solve(){
    int n;
    cin >> n;
    int t ;
    cin >> t;
    int a = 1;
    int b = 2;
    while(n--){
        cout << func(a,b);
        a++;
        b++;
        Sleep(t*1000);
    }
}

int32_t main(){

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    IOS;
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}