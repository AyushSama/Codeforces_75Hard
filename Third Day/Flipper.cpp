
//Basic Brute Would have worked , This is Wrong solution --> 

#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n; 
    cin >> n;
    int arr[n];
    int maxPos = -1;
    int maxx = -1;
    for(int i = 0 ; i < n; i++){
        cin >> arr[i] ;
        if(i==0) continue;
        if(arr[i]>maxx){
            maxPos = i;
            maxx = arr[i];
        }
    }
    if(n==1){
        cout << arr[0];
        return;
    }
    if(maxPos==n-1){
        int i = maxPos-1;
        while(arr[i]>=arr[0]) i--;
        if(i<0) i=0;
        for(int x = n-1 ; x > i; x--)
            cout << arr[x] << " ";
        for(int x = 0 ; x <= i ; x++)
            cout << arr[x] << " ";
        return;
    }
    else{

        int i = maxPos-1;
        while(arr[i]>=arr[0]) i--;

        for(int i = maxPos ; i < n; i++)
            cout << arr[i] << " ";

        int temp = maxPos-2 ;
        for(int i = 0 ; i < maxPos-1 ; i++){
            if(arr[i]>arr[maxPos-1]){
                temp = i;
                break;
            }
        }

        for(int i = maxPos-1 ; i >= temp ; i--)
            cout << arr[i] << " ";

        for(int i = 0 ; i < temp ; i++)
            cout << arr[i] << " ";
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