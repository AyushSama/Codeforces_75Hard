// #include<bits/stdc++.h>
// using namespace std;
// #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define endl "\n"
// #define int long long

// bool helper(int arr[],int n,int idx,int num,int f){
//     if(idx>=n){
//         if(num==f){
//             return true;
//         }
//         return false;
//     }
//     return helper(arr,n,idx+1,num+arr[idx],f)|helper(arr,n,idx+1,(num^arr[idx]),f);
// }

// void solve(){
//     int n , a , final;
//     cin >> n >> a >> final;
//     int arr[n];
//     for(int i = 0 ; i < n; i++){
//         cin >> arr[i];
//     }
//     int b = a+3;
//     if(helper(arr,n,0,a,final))
//         cout << "Alice";
//     else
//         cout << "Bob";
// }

// int32_t main(){

//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     IOS;
//     int t = 1;
//     cin>>t;
//     while(t--){
//         solve();
//         cout<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int MAXN = 101; // Adjust this based on your input constraints

int dp[MAXN][MAXN][2]; // DP table with three dimensions: idx, num, f

int helper(int arr[], int n, int idx, int num, int f) {
    if (idx >= n) {
        if (num == f) {
            return 1;
        }
        return 0;
    }

    if (dp[idx][num][f] != -1) {
        return dp[idx][num][f];
    }

    int result = helper(arr, n, idx + 1, num + arr[idx], f) | helper(arr, n, idx + 1, (num ^ arr[idx]), f);
    return dp[idx][num][f] = result;
}

void solve() {
    int n, a, final;
    cin >> n >> a >> final;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    memset(dp, -1, sizeof(dp)); // Initialize DP table with -1

    if (helper(arr, n, 0, a, final)) {
        cout << "Alice";
    }
    else {
        cout << "Bob";
    }
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
