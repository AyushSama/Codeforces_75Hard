#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n; 
    cin >> n;
    priority_queue<pair<int,int>>pq;
    while(n--){
        int x ;
        cin >> x;
        int arr[x];
        for(int i = 0 ; i < x ; i++) cin >> arr[i];
        sort(arr,arr+x);
        pq.push({arr[1],arr[0]});
    }
    if(pq.size()==1){
        cout << pq.top().second;
        return;
    }
    // while(!pq.empty()){
    //     cout << pq.top().first << " " << pq.top().second << endl;
    //     pq.pop();
    // }
    int res = 0 ;
    int minn = INT_MAX;
    auto temp = pq.top();
    pq.pop();
    res+= temp.first;
    minn = min(minn,temp.second);
    while(pq.size()>1){
        temp = pq.top();
        pq.pop();
        minn = min(minn,temp.second);
        res+= temp.first;
    }
    temp = pq.top();
    res+= min(minn,temp.second);
    cout << res;
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