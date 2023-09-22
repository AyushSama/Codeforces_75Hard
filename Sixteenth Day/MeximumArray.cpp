#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
#define pb push_back
int main()
{
    int t;
    cin>>t;
 
    while (t--){
        int n;
        cin>>n;
 
        vi a(n + 1);
        vvi pos(n + 2);//if mex == n + 1 => pos[n + 1] is empty
 
        for (int i = 1;i<=n;i++){
            cin>>a[i];
            pos[a[i]].pb(i);//add index i to the set of positions[a[i]]
        }
 
        int l = 1;
        vi b;//final answer
 
        while (l <= n){
            int mex = 0;
            int r = l;//[l, l]
 
            for (;mex <= n + 1;mex++){
                auto it = lower_bound(pos[mex].begin(),pos[mex].end(),l);
                if (it == pos[mex].end())//no occurrence of mex in the range [i, n]
                    break;
                r = max(r, *it);
            }   
 
            b.pb(mex);
            l = r + 1;
 
        }

        cout<<(int)b.size()<<endl;
        for (auto it:b)cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}