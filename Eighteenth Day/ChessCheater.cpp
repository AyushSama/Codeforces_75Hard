#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int cal(string s){
    int n = s.size();
    int ans = 0;
    for(int i = 0 ; i < n; i++){
        if(s[i]=='W'){
            if(s[i-1]=='W' && i-1>=0)
                ans+=2;
            else
                ans+=1;
        }
    }
    return ans;
}

void solve(){
    int n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    // cout << s << endl;
    if(k==0){
        cout << cal(s);
    }
    else{
        int i = 0;
        while(s[i]=='L' && i < n )
                i++;
        while(i<n){
            while(s[i]=='W')
                i++;
            int count = 0;
            int j = i;
            while(s[j]=='L' && j < n)
                count++ , j++ ;
            if(count<=k){
                k = k - count;
                j = i;
                while(s[j] == 'L' && count--)
                    s[j]= 'W' , j++ ;
            }
            i = j;
        }
        i = 0 ;
        while(i<n){
            if(s[i]=='W'){
                int j = i-1;
                while(j>=0 && s[j]=='L' && k){
                    s[j]='W';
                    j--;
                    k--;
                }
                i++;
            }
            else
                i++;
        }
        i = 0 ;
        while(i<n){
            if(s[i]=='W'){
                int j = i+1;
                while(j<n && s[j]=='L' && k){
                    s[j]='W';   
                    j++;
                    k--;
                }
                i = j;
            }
            else
                i++;
        }
        for(int i = 0 ; i < n && k ; i++){
            if(s[i]=='L'){
                s[i]='W';
                k--;
            }
        }
        // cout << s << " ";
        cout << cal(s);
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