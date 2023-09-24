#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n , m , x;
    cin >> n >> m >> x;
    int arr[n];
    int sum = 0;
    for(int i = 0 ; i < n; i++) cin >> arr[i] , sum+=arr[i];
    sort(arr,arr+n);
    int req = sum/m;
    int count = 0;
    int temp = 0;
    for(int i = 0 ; i < n; i++){
        if(temp>req){
            temp = 0;
            count++;
        }
        temp+=arr[i];
    }
    if(count!=m)
        cout << "NO";
    else{
        cout << "YES" << endl;
        for(int i = 0 ; i < n; i++){
            if(temp>=req){
                temp = 0;
                count++;
            }
            temp+= arr[i];
            cout << count+1 << " ";
        }
    }
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
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