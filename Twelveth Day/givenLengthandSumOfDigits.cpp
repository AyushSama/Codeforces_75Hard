#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin >> n;
    int x = n;
    int sum ;
    cin >> sum;
    if(n==1 && sum==0){
        cout << 0 << " " << 0;
        return;
    }
    if(9*n<sum || sum==0){
        cout << -1 << " " << -1;
        return;
    }
    if(n==1){
        cout << sum << " " << sum;
        return;
    }
    string maxx = "";
    while(n--){
        maxx+= min(9LL,max(sum,0LL))+'0';
        sum-=9;
    }
    if(maxx.back()!='0'){
        string temp = maxx;
        reverse(maxx.begin(),maxx.end());
        cout << maxx << " " ;
        cout << temp ;
        return;
    }
    else{
        string temp = maxx;
        reverse(maxx.begin(),maxx.end());
        maxx[0] = '1';
        for(int i =1 ; i<x;i++){
            if(maxx[i]!='0'){
                maxx[i] -=1;
                break;
            }
        }
        cout << maxx << " ";
        cout << temp;
    }
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}