#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> bal(n + 1);
        for(int j = 0; j < n; j++)
            if(s[j] == '(')
                bal[j + 1] = bal[j] + 1;
            else
                bal[j + 1] = bal[j] - 1;

        if(bal.back() != 0)
            cout << -1 << endl;
        else
        {
            if(*min_element(bal.begin(), bal.end()) == 0 || *max_element(bal.begin(), bal.end()) == 0)
            {
                cout << 1 << endl;
                for(int j = 0; j < n; j++)
                {
                    if(j) cout << " ";
                    cout << 1;
                }
                cout << endl;
            }
            else
            {
                cout << 2 << endl;
                vector<int> ans;
                int cur = 0;
                while(cur < n)
                {
                    int w = (s[cur] == '(' ? 1 : 2);
                    do
                    {
                        cur++;
                        ans.push_back(w);
                    }
                    while(bal[cur] != 0);
                }
                for(int j = 0; j < n; j++)
                {
                    if(j) cout << " ";
                    cout << ans[j];
                }
                cout << endl;
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
        // cout<<endl;
    }
    return 0;
}