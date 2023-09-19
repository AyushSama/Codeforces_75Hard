#include <bits/stdc++.h>
#define ll long long
#define ul unsigned long long 
typedef double dl;
#define F first
#define S second
ll MOD = 1000000007; //998244353
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define pb push_back
#define g(v, i, j) get<i>(v[j])
#define vi vector<int>
#define vll vector<ll>
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.begin(), v.end(), greater<int>())
#define loop1(i, a, b) for (int i = a; i < b; i++)
#define loop2(i, a, b) for (ll i = a; i < b; i++)
using namespace std;
bool sortbysec(const pair<ll, ll> &a,
               const pair<ll, ll> &b)
{
    return (a.second < b.second);
}
ll POW(ll a,ll b)
{
    if(b==0) return 1;
    if(b==1) return a%MOD;
    ll temp=POW(a,b/2);
    if(b%2==0) return (temp*temp)%MOD;
    else return (((temp*temp)%MOD)*a)%MOD;
}
vector<char> capl = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
vector<char> sml = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],sum=0;
        vector<pair<ll,ll> >v;
        loop2(i,0,n)
        {
            cin>>arr[i];
            v.pb({arr[i],i+1});
            sum+=arr[i];
        }
        sort(v.begin(),v.end());
        ll c=1;
        for(ll i=n-2;i>=0;i--)
        {
            sum-=v[i+1].F;
            if(sum<v[i+1].F)
            {
                break;
            }
            else
            {
                c++;
            }
        }
        vector<ll>v1;
        for(ll i=n-1;i>=n-1-c+1;i--)
        {
            v1.pb(v[i].S);
        }
        sort(v1.begin(),v1.end());
        cout<<v1.size()<<"\n";
        loop2(i,0,v1.size())
        {
            cout<<v1[i]<<" ";
        }
        cout<<"\n";
    }
}
 
 
 