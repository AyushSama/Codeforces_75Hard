#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int availableHomes(int N, int X , int A[]){
    sort(A,A+N);
    int count = 0;
    for(int i = 0 ; i < N ; i++){
        if(A[i]-A[0] <= X)
            count++;
    }
    return factorial(count)/(factorial(4)*factorial(count-4));
}

void solve(){
    int n; 
    cin >> n;
    int k ;
    cin >> k;
    int arr[n];
    for(int i = 0 ; i < n; i++)
        cin >> arr[i];
    cout << availableHomes(n,k,arr);   
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