#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

void generateStrings(string l, string r, string s, int index ,vector<string>&res) {
    if (index == s.length()) {
        res.push_back(s);
        return;
    }

    for (char ch = l[index]; ch <= r[index]; ++ch) {
        s[index] = ch;
        generateStrings(l, r, s, index + 1,res);
    }
}

void helper(string s , int n ,set<string>&v,string temp,int idx){
    if(temp.size()==n){
        v.insert(temp);
        return;
    }
    if(idx>=s.size())
        return;
    temp.push_back(s[idx]);
    helper(s,n,v,temp,idx+1);
    temp.pop_back();
    helper(s,n,v,temp,idx+1);
}

void solve(){
    string s;
    cin >> s ;
    int n; 
    cin >> n;
    string l ,r;
    cin >> l >> r;
    // set<string>v;
    // helper(s,n,v,"",0);
    vector<string>v;
    generateStrings(l,r,s,n,v);
    bool f = false;
    for(auto x : v){
        int i = 0;
        int j = 0;
        while(i<s.size() && j < n){
            if(s[i]==x[j]){
                i++;
                j++;
            }
            else
                i++;
        }
        if(j>=n){
            f = true;
            break;
        }
    }
    if(f)
        cout << "YES";
    else
        cout << "NO";
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