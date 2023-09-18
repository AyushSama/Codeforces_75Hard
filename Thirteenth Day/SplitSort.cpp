#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int helper(int arr[],int i , int j){
    if(i>j)
        return 0;
    bool f = true;
    for(int k = i ; k < j ; k++){
        if(arr[k]>arr[k+1])
            f = false;
    }
    if(f)
        return 1;
    int mid = (i+j)/2+1;
    int ans = 0;
    int k;
    for(k = i ; k <= j ; k++){
        if(arr[k]==mid)
            break;
    }
    ans+= helper(arr,i,k);
    ans+= helper(arr,k+1,j);
    return ans;
}

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++)
        cin >> arr[i];
    cout << helper(arr,0,n-1);
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