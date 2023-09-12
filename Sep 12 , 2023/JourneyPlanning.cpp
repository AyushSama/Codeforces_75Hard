#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

void helper(int arr[],int idx,int n,vector<int>temp,int prev,int& ans ,int sum){
    if(idx>=n){
        int sumx = 0;
        for(auto x : temp)
            sumx+=x;
        ans = max(ans,sumx);
        return;
    }
    if(prev==-1){
        temp.push_back(arr[idx]);
        helper(arr,idx+1,n,temp,idx,ans,sum+arr[idx]);
        temp.pop_back();
        helper(arr,idx+1,n,temp,-1,ans,sum);
    }
    else{
        if(arr[idx]>arr[prev] && ((arr[idx]-arr[prev]) == (idx-prev))){
            temp.push_back(arr[idx]);
            helper(arr,idx+1,n,temp,idx,ans,sum+arr[idx]);
            temp.pop_back();
            helper(arr,idx+1,n,temp,prev,ans,sum);
        }
        else{
            helper(arr,idx+1,n,temp,prev,ans,sum);
        }
    }
}

void solve(){
    int n ;
    cin >> n;
    int arr[n];
    for(int i =0 ; i < n; i++) cin >> arr[i];
    int ans = 0;
    helper(arr,0,n,{},-1,ans,0);
    cout << ans << endl;
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}