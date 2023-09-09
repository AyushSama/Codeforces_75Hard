    #include<bits/stdc++.h>
    using namespace std;
    #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define endl "\n"
    #define int long long

    int stringToInt(const string& str) {
        int result = 0;
        bool isNegative = false;
        int i = 0;

        // Check for a negative sign
        if (str[0] == '-') {
            isNegative = true;
            i = 1; // Start from the next character
        }

        // Iterate through the string characters and build the integer
        for (; i < str.length(); ++i) {
            char digit = str[i];
            
            if (isdigit(digit)) {
                result = result * 10 + (digit - '0');
            } else {
                // Handle non-digit characters if needed
                cerr << "Invalid character found in the string." << endl;
                return 0; // Return 0 or handle the error as desired
            }
        }
        if (isNegative) {
            result = -result;
        }
        return result;
    }

    bool isPrime(string s) {
        int n = stringToInt(s);
        // cout << n << " ";
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }

    void helper(string s , int idx , int n , string& res , string temp){
        if(idx>=n)
            return;
        // cout << temp << " ";
        if(isPrime(temp) && temp.size()>=2){
            res = temp;
            return;
        }
        temp.push_back(s[idx]);
        helper(s,idx+1,n,res,temp);
        temp.pop_back();
        helper(s,idx+1,n,res,temp);
    }

    void solve(){
        string s ;
        cin >> s;
        int n = s.size();
        string res = "";
        helper(s,0,n,res,"");
        if(res.size()==0){
            cout << -1;
            return;
        }
        else{
            cout << stringToInt(res);
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