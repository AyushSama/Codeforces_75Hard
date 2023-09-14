#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

stack<pair<int,int>>pairs;

pair<int,int> createPair(int a , int b){
    pairs.push({a,b});
    return pairs.top();
}

int car(pair<int,int>p){
    return p.first;
}

int cdr(pair<int,int>p){
    return p.second;
}

void solve(){
    int n;
    cin >> n;
    while(n--){
        int k ;
        cin >> k;
        int a , b;
        cin >> a >> b;
        if(k==1){
            createPair(a,b);
        }
        else if(k==2){
            int x = car(createPair(a,b));
            cout << x << endl;
        }
        else{
            int x = cdr(createPair(a,b));
            cout << x << endl;
        }
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