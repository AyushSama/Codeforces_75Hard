#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

void SieveOfEratosthenes(int n , vector<bool>&prime)
{
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void solve(){
    int a , b;
    cin >> a >> b;
    // vector<bool>prime(b+1,true);
    // SieveOfEratosthenes(b,prime);
    for(int i = a ; i<=b ; i++){
        if(!isPrime(i)){
            if(i%2==0){
                cout << i/2 << " " << i/2;
                return;
            }
            else{
                for (int a = 2; a <= i / 2; a++) {
                    int b = i - a;
                    if (__gcd(a, b) != 1) {
                        cout << a << " " << b;
                        return;
                    }
                }
            }
        }
    }
    cout << -1;
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