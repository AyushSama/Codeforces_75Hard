#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++)
        cin >> arr[i];
    int prefix[n];
    prefix[0] = arr[0];
    for(int i = 1 ; i < n; i++)
        prefix[i] = arr[i] + prefix[i-1];
    if(prefix[n-1]!=0){
        cout << -1;
        return;
    }
    map<int,int>mp;
    int count = 0;
    vector<int>resPos;
    int prev = 0;
    for(int i = 0 ; i < n; i++){
        if(arr[i]<0){
            if(mp[abs(arr[i])]==1)
                mp[abs(arr[i])]++;
            else {
                cout << -1 ;
                return;
            }
        }
        else
            mp[arr[i]]++;
        if(prefix[i]==0){
            for(auto x : mp){
                if(x.second>2){
                    cout << -1;
                    return;
                }
            }
            count++;
            // cout << prev << " " << i << endl;
            resPos.push_back(i-prev+1);
            prev = i+1;
            mp.clear();
        }
    }
    cout << count << endl;
    for(auto x : resPos)
        cout << x << " ";
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