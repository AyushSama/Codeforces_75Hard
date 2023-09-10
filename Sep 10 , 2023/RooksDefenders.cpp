#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int n , q;
    cin >> n >> q;
    set<int>xcor;
    set<int>ycor;
    while(q--){
        int a , x1 , y1 ;
        cin >> a >> x1 >> y1;
        if(a==3){
            int  x2 , y2;
            cin >> x2 >> y2;
            bool f = false;
            for(int i = x1 ; i<= x2 ; i++){
                if(xcor.find(i)!=xcor.end() || xcor.find(i)!=xcor.end()){
                    cout << "YES" << endl;
                    f = true;
                    break;
                }
            }
            if(f)
                continue;
            for(int i = y1 ; i<= y2 ; i++){
                if(ycor.find(i)!=ycor.end() || ycor.find(i)!=ycor.end()){
                    cout << "YES" << endl;
                    f = true;
                    continue;
                }
            }
            if(f)   
                continue;
            cout << "NO" << endl;
        }
        else if(a==1){
            xcor.insert(x1);
            ycor.insert(y1);
            for(auto x : xcor)  
                cout << x << " ";
            cout << "->";
            for(auto x : ycor)  
                cout << x << " ";
            cout << endl;
        }
        else {
            cout << x1 << " " << y1 << " ->";
            auto it = xcor.find(x1);
            xcor.erase(it);
            it = ycor.find(y1);
            ycor.erase(it);
            for(auto x : xcor)  
                cout << x << " ";
            cout << "->";
            for(auto x : ycor)  
                cout << x << " ";
            cout << endl;
        }
    }
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}