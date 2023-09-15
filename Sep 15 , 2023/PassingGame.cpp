#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int PassingGame(int N, int A[]){
    int i =0;
    int res = 0;
    while(A[i]>=0){
        res++;
        A[i]-=1;
        i+=1;
        i%=N;
    }
    return res;
}

void solve(){
    int n ;
    cin >> n; 
    int arr[n];
    for(int i = 0 ; i < n; i++)
        cin >> arr[i];
    cout << PassingGame(n,arr);
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