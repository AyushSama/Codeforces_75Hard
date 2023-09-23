#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int,int>P;

const int MOD=1000000007;
const int INF=0x3f3f3f3f;
const ll INFL=0x3f3f3f3f3f3f3f3f;

int main(){
	int T;cin>>T;
	rep(Case,T){
		ll n,g,b;scanf("%lld%lld%lld",&n,&g,&b);
		ll d=0;
		ll need=(n+1)/2;
		if(need%g==0){
			d=(need/g)*(b+g)-b;
		}
		else d=need/g*(b+g)+need%g;
		printf("%lld\n",max(n,d));
	}
}