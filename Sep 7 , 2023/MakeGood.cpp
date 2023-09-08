#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
        sum+= arr[i];
    }
    if(sum%2){
        sum+=1;
        cout<< 3 << endl << 1 << " " << sum << " " << sum/2 ;
    }
    else
        cout << 2 << endl << sum << " " << sum/2;
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