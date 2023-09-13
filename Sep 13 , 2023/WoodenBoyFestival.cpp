#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int binarySearch(vector<int>v){
    int n = v.size();
    sort(v.begin(),v.end());
    int low = v[0];
    int high = v[n-1];
    int ans = high-low;
    while(low<=high){
        int mid = (low+high)/2;
        int temp = 0;
        for(auto x : v)
            temp = max(temp,abs(x-mid));
        if(temp<=ans){
            ans = temp;
            high = mid-1;
        }
        else
            low= mid+1;
    }
    return ans;
}

void solve(){
    int n;
    cin >> n;
    int arr[n];
    int high = -1;
    for(int i = 0 ; i < n; i++){ 
        cin >> arr[i];
        high = max(high,arr[i]);
    }
    int first = ceil(high/3);
    int second = first*2;
    vector<int>firstHalf;
    vector<int>secondHalf;
    vector<int>thirdHalf;
    for(int i = 0 ; i < n ;i ++){
        if(arr[i]<=first)
            firstHalf.push_back(arr[i]);
        else if(arr[i]>first && arr[i]<=second)
            secondHalf.push_back(arr[i]);
        else
            thirdHalf.push_back(arr[i]);
    }
    int x = binarySearch(firstHalf);
    int y = binarySearch(secondHalf);
    int z = binarySearch(thirdHalf);

    cout << x << " " << y << " " << z;
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