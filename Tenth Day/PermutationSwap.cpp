#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n; 
    cin >> n;
    int count = 1;
    int arr[n];
    for(int i = 0 ;i < n; i++)
        cin >> arr[i];
    vector<int>diff;
    for(int i = 0 ; i < n; i++){
        if(arr[i]!=count)
            diff.push_back(i);
        count++;
    }
    int check = diff[1]-diff[0];
    for(int i = 1 ; i < diff.size()-1;i++){
        if(diff[i+1]-diff[i] != check){
            cout << 1;
            return;
        }
    }
    cout << check ;
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