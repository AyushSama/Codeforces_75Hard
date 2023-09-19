#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int sll;
typedef long double ld;
typedef complex<ll> cll;

#define re real
#define im imag
#define A 1000000007ll
#define D 100000000000000ll
#define B 998244353ll
#define C 1000000000000000000ll
#define M 4000
#define F first
#define S second
#define pll pair<ll,ll>
#define ppll pair<ll,pair<ll,ll>>
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define oset tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update> 
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define sor(v) sort(v.begin(),v.end())
#define sorrev(v) sort(v.begin(),v.end(),greater<pair<ll,ll>>())
#define uni(v) unique(v.begin(),v.end())
#define bs binary_search
#define lb(v,x) lower_bound(v.begin(),v.end(),x)
#define ub(v,x) upper_bound(v.begin(),v.end(),x)
#define ve vector
#define br break
#define PI acos(-1)
#define pll pair<ll,ll>
#define subt cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n" 
const ll MAXN=300005; 
auto random_address = [] { char *p = new char; delete p; return sll(p); };
const sll SEED = chrono::steady_clock::now().time_since_epoch().count() * (random_address() | 1);
mt19937_64 rng(SEED);

int main() 
{
    FAST;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            ll y=1;
            while(x>0)
            {
                x/=2ll;
                y*=2ll;
            }
            cout<<y/2ll<<' ';
        }
        cout<<'\n';
    }
    subt;   
    return 0;
}
