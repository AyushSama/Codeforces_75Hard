#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int stringToInt(const std::string& str) {
    int result = 0;

    for (char c : str) {
        if (c >= '0' && c <= '9') {
            int digitValue = c - '0';
            result = result * 10 + digitValue;
        }
    }

    return result;
}

void encodeString(string s,int idx,int n,vector<string>&res,map<int,char>mp,string temp){
    if(idx>=n){
        res.push_back(temp);
        return;
    }
    string x = "";
    x = s[idx];
    int num = stringToInt(x);
    // cout << mp[num] << " ->> ";
    encodeString(s,idx+1,n,res,mp,temp+mp[num]);
    if(idx+1<n){
        x = s[idx];
        x += s[idx+1];
        int num = stringToInt(x);
        // cout << num << " ";
        if(num<=26){
            // cout << mp[num] << " -> ";
            encodeString(s,idx+2,n,res,mp,temp+mp[num]);
        }
    }
}

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    map<int,char>mp;
    for(int i = 0 ; i < 26 ;i++)
        mp[i+1] = char(i+'a');
    // for(auto x : mp)
    //     cout << x.first << " " << x.second << endl;
    vector<string>res;
    encodeString(s,0,n,res,mp,"");
    for(auto x : res) 
        cout << x << " ";
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