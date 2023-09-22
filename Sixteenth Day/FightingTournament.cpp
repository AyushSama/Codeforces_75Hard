
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define int 				long long
#define w(t)                int t;cin>>t;while(t--)
#define pb                  push_back
#define mk                  make_pair
#define ascSort(v)          sort(v.begin(), v.end())
#define descSort(v)         sort(v.begin(), v.end(), greater<int>())
#define ff                  first
#define ss                  second
#define pi                  pair<int,int>
#define vi                  vector<int>
#define mi                  map<int,int>
#define fill(a,x)           fill(a.begin(), a.end(), x)
#define iota(a,x)           iota(a.begin(), a.end(), x)
#define umapi               unordered_map<int,int>

#define sz(x)               (int)x.size()
#define all(x)              x.begin(), x.end() 
#define ln                  "\n"

const int mod1=998244353;
const int mod2=1e9+7;
const int inf=mod2;
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>PBDS;

void FIO(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output1.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);	
}


void testcase(){
	int n,q;cin>>n>>q;
	vi a(n);
	for(int i=0; i<n; i++)cin>>a[i];
	vi mx(n);
	mx[0]=a[0];
	for(int i=1; i<n; i++){
		mx[i]=max(mx[i-1],a[i]);
	}
	while(q--){
		int i,k;cin>>i>>k;
		i--;
		int l=lower_bound(all(mx),a[i])-mx.begin();
		int r=upper_bound(all(mx),a[i])-mx.begin();
		if(mx[l]!=a[i]){
			cout<<"0\n";
			continue;
		}
 
		r=min(r,k+1);
		
		
		if(r==n)r=k+1;
		int ans=r-l;
		if(i==0)ans--;
		cout<<max((int)0,ans)<<"\n";
	}	
}

int32_t main(){
	
	FIO();
	//usaco("test");
	int t=1;
	cin>>t;
	for(int i=1; i<=t; i++){
		//cout<<"Case #"<<i<<": ";
		testcase();
	}
	return 0;
		
}
