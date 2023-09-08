#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int factor(int n){
    int res = 0;
    for(int i = 3 ; i <= n; i+=2){
        if(n%i==0)
            return i;
    }
    return -1;
}

void solve(){
    int n;
    cin >> n;
    if(n==1){
        cout << 'a';
        return;
    }
    string res = "";
    if(n%2==0){
        int req = n/2+1;
        int c = 0; 
        for(int i = 0 ; i < n; i++){
            res += char(c%req+'a');
            c++;
            c = c%req;
        }
    }
    else{
        int secondFactor = factor(n);
        if(secondFactor == n){
            for(int i = 0 ; i  <n ;i++){
                if(i%2==0)
                    res+= 'a';
                else    
                    res+= 'b';
            }
        }
        else{
            int req = secondFactor+1;
            int c = 0; 
            for(int i = 0 ; i < n; i++){
                res += char(c%req+'a');
                c++;
                c = c%req;
            }
        }
    }
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