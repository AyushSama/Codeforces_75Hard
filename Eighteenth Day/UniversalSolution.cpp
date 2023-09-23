#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    string s ;
    cin >> s;
    int n = s.size();
    int rock = 0;
    int sci = 0 ;
    int paper = 0;
    for(auto x : s){
        if(x=='R')  
            rock++;
        else if(x=='P')
            paper++;
        else 
            sci++;
    }
    int temp = max(rock,max(sci,paper));
    char res;
    if(rock==temp)
        res = 'P';
    else if(paper==temp)
        res = 'S';
    else if(temp == sci)
        res = 'R';
    while(n--){
        cout << res;
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