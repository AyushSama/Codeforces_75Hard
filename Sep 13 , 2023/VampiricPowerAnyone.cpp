#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n + 1, 0);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            a[i] ^= a[i - 1];
        }

        vector<bool> b(256, false);
        int mx = 0;

        for(int i = 0; i <= n; i++){
            for(int j = 0; j < 256; j++)if(b[j]){
                mx = max(mx, a[i] ^ j);
            }
            b[a[i]] = true;
        }

        cout << mx << '\n';
    }

    return 0;
}