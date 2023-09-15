#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

void dfs(int node,int dest,int k, vector<pair<int,int>>v,map<int,pair<int,int>>pos,int& res,vector<bool>vis,int dis){
    vis[node] = 1;
    if(node == dest){
        cout << endl;
        res = min(res,dis);
        return;
    }
    for(int i = 1 ; i <= v.size() ; i++){
        if(!vis[i]){
            cout << i << "->";
            if(node<=k && i<=k)
                dfs(i,dest,k,v,pos,res,vis,dis);
            else{
                auto first = pos[i];
                auto second = pos[node];
                dis+= abs(first.first-second.first) + abs(first.second-second.second);
                dfs(i,dest,k,v,pos,res,vis,dis);
            }
        }
    }
}

void solve(){
    int n , k , a , b;
    cin >> n >> k >> a >> b;
    vector<pair<int,int>>v;
    map<int,pair<int,int>>pos;
    for(int i = 1 ; i <=n ; i++){
        int x , y;
        cin >> x >> y;
        v.push_back({x,y});
        pos[i] = {x,y};
    }
    vector<bool>vis(n+1,false);
    int res = LONG_LONG_MAX;
    dfs(a,b,k,v,pos,res,vis,0);
    cout << res ;
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