#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
   int t;cin>>t;
   while ( t--)
   {
        int n,m;cin>>n>>m;
        vector<int>v(n);
        int one=0;
        int two=0;
        vector<int>res(m+1);
        int cnt=0;
        for ( int i = 0; i <  n; i++)
        {
             cin>>v[i];
             if(v[i]==-1){
                one++;
             }
            else if(v[i]==-2){
                two++;
             }
             else
             {    
                if(res[v[i]]==0){
                    cnt++;
                }
                 res[v[i]]=1;
             }
        }

        vector<int>pre(m+1),suf(m+1);
        suf[m]=res[m];
        for(int i=m-1;i>=1;i--)
        {
            suf[i]=suf[i+1]+res[i];
        }
        pre[1]=res[1];
        for(int i=2;i<=m;i++){
            pre[i]=pre[i-1]+res[i];
        }

        int ans=min(m,one+cnt);
       int ans2=min(m,two+cnt);
       // cout<<ans<<endl;
        ans=max(ans,ans2);

        for(int i=1;i<=m;i++){
            if(res[i]==1){
                int ans1=1+min(i-1,pre[i-1]+one)+min(m-i,suf[i+1]+two);
                ans=max(ans,ans1);
            }
        }

        cout<<ans<<endl;   
   }
   
}