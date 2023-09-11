#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<pair<int,int>>v;
    map<int,int>mp;
    int maxx = INT_MIN;
    int minn = INT_MAX;
    int pos = 0;
    int neg = 0;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        if(arr[i]>0) 
            pos++;
        else
            neg++;
        mp[arr[i]] = i+1;
        maxx = max(maxx,arr[i]);
        minn = min(minn,arr[i]);
    }
    if(pos==0){
        for(int i = n-2 ; i >= 0 ;i--){
            arr[i] = arr[i]+arr[i+1]; 
            v.push_back({i+1,arr[i+1]});
        }
        cout << n-1 << endl;
        for(auto x : v)
            cout<<x.first<<" "<<x.second<<endl;
    }
    else{
        for(int i = 1 ; i < n; i++){
            if(arr[i]<arr[i-1]){
                while(arr[i]<arr[i-1]){
                    arr[i]+=maxx;
                    v.push_back({i+1,mp[maxx]});
                }
                mp[arr[i]] = i+1;
                maxx = max(maxx,arr[i]);
            }
        }
        cout<<v.size()<<endl;
        for(auto x : v)
            cout<<x.first<<" "<<x.second<<endl;
    }
}

int32_t main(){
    IOS;
    int t = 1;
    cin>>t;
    while(t--){
        solve();
        // cout<<endl;
    }
    return 0;
}