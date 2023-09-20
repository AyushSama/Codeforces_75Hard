#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin >> n;
    string s , t;
    cin >> s >> t;
    if(s==t){
        cout << "YES";
        return;
    }   
    if(n==1){
        cout << "NO";
        return;
    }
    for(int i = 0 ; i < n; i++){
        if(s[i]!=t[i]){
            if(s[i]=='a' && t[i]=='b'){
                int j = i;
                while(s[j]=='a') j++;
                if(j>=n || s[j]!='b'){
                    cout << "NO";
                    return;
                }
                else{
                    swap(s[i],s[j]);
                }
            }
            else if(s[i]=='b' && t[i]=='c'){
                int j = i;
                while(s[j]=='b') j++;
                if(j>=n || s[j]!='c'){
                    cout << "NO";
                    return;
                }
                else{
                    swap(s[i],s[j]);
                }
            }
            else{
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
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