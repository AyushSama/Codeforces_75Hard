#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


void solve(){
    int interval = 100000;
    srand(time(NULL));
    int circlePoints = 0;
    int squarePoints = 0;
    double pi;
    double rand_x , rand_y , origin;
    for(int i =0 ; i < interval*interval ; i++){
        rand_x = double(rand()%(interval+1))/interval;
        rand_y = double(rand()%(interval+1))/interval;
        origin = rand_x*rand_x + rand_y*rand_y;
        if(origin<=1)
            circlePoints++;
        squarePoints++;
        pi = double(4*circlePoints)/squarePoints;
        // cout << rand_x << " " << rand_y << " " << origin << " " << pi << endl;
    }
    cout << pi ;
}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t =1;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}