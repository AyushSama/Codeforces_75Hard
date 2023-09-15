#include<bits/stdc++.h>
#define dbg(x) cout<<#x<<"="<<x<<" "
#define ENDL cout<<"\n"
using namespace std;
const int N=3e5+10;
string s,l,r;
int m;
void solve()
{
	cin>>s;
	cin>>m;
	cin>>l>>r;	
	int n=s.size();
	int now=0;
	bool flag=1;
	for(int i=0;i<m;++i){
		int ma=0;
		int low=l[i]-'0',up=r[i]-'0';
		for(int j=low;j<=up;++j){
			int k=now;
			while(k<=n){
				if(s[k]-'0'==j)break;
				k++;
			}
			if(k==n+1){
				flag=0;
				break;
			}
			ma=max(ma,k);
		}
		now=ma+1;
		if(flag==0)break;
	}
	if(flag==0)cout<<"YES\n";
	else cout<<"NO\n";
}
int main()
{
	int t;cin>>t;
	while(t--)solve();
}