#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

bool isPrime(int number) {
    if (number <= 1) {
        return false;  // 0 and 1 are not prime
    }
    if (number <= 3) {
        return true;   // 2 and 3 are prime
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return false;  // Numbers divisible by 2 or 3 are not prime
    }
    for (long long i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

bool isComposite(int n){
    int prime = 0;
    int comp = 0;
    for(int i =2 ; i<=n ; i++){
        if(n%i==0){
            if(isPrime(i))
                prime++;
            else
                comp++;
        }
    }
    cout << comp << " " << prime << "->>>>>";
    return comp>=prime;
}

void solve(){
    int n;
    cin >> n;
    int mul = 1;
    while(n--){
        int x ; 
        cin >> x;
        mul*=x;
    }
    int ans = 0;
    int temp = mul;
    for(int i = 2 ; i <= mul/2 ; i++){
        if(i>=temp)
            break;
        if(temp%i==0 && isComposite(i)){   
            cout << i << "->"; 
            ans+= i;
            temp = temp/i;
            cout << temp << " ";
        }
    }
    cout << ans ;
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