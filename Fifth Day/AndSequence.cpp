#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int MOD=1e9+7;
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    
    int min1=*min_element(a.begin(),a.end());
    int cnt=0;
    
    for(int x:a)
    {
        if(min1==x)cnt++;
        if((min1&x)!=min1)
        {
            printf("0\n");
            return;
        }
    }
    
    int fact=1;
    for(int i=1;i<=n-2;i++)fact=(1LL*fact*i)%MOD;
    int ans=(1LL * cnt * (cnt-1))%MOD;
    ans = (1LL * ans * fact) % MOD;
    printf("%d\n",ans);
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
        // cout<<endl;
    }
    return 0;
}