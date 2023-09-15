#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int divide(int dividend, int divisor){
    int q = 0;
    int t = 0;
    for(int i = 31;i>=0 ;i--){
        if(t+(divisor<<i)<=dividend){
            t += divisor<<i;
            q = q|(1<<i);
        }
    }
    return q;
}

void solve(){
    int n;
    cin >> n;
    int arr[n];
    int mul = 1;
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
        mul = mul*arr[i];
    }
    for(int i = 0 ; i < n; i++){
        arr[i] = divide(mul,arr[i]);
        cout << arr[i] << " ";
    }
    
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