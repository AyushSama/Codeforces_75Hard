#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n; 
    cin >> n;
    int arr[n];
    int odd = 0 ;
    int even = 0;
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
        if(arr[i]%2)
            odd++;
        else
            even++;
    }
    sort(arr,arr+n);
    if(arr[0]==arr[n-1]){
        cout << -1;
        return;
    }
    vector<int>b;
    vector<int>c;
    if(odd && even){
        for(int i = 0 ; i < n; i++){
            if(arr[i]%2)
                b.push_back(arr[i]);
            else
                c.push_back(arr[i]);
        }
    }
    else{
        // for(int i = 0 ; i < n-1 ; i++) b.push_back(arr[i]);
        // c.push_back(arr[n-1]);
        int i = n-1 ; 
        int last = arr[n-1];
        while(i>=0){
            if(arr[i]==last)
                c.push_back(arr[i]);
            else
                b.push_back(arr[i]);
            i--;
        }
    }
    cout << b.size() << " " << c.size() << endl;
    for(auto x : b)
        cout << x << " ";
    cout << endl;
    for(auto x : c)
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