#include<bits/stdc++.h>
typedef long long ll;
#define FOR1(i,a,b) for(int i=a; i<=b;i++)
#define FOR2(i,a,b) for(int i=b;i>=a;i--)
#define mii map<int,int>
#define pb push_back
#define ii pair<int,int>
#define fi first
#define se second
#define el cout<<'\n'
using namespace std;

const int maxn=1e5+1;
const long long Mod=1e9+7;
const ll INF = 1e18;

int n,k,t;

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
ll gcd(ll a, ll b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
ll lcm(ll a, ll b)
{
	return a/gcd(a,b) *b;
}
ll solve(int x, int y, int z, int n)
{
	ll tmp=lcm(lcm(x,y),z);
	ll m=pow(10,n-1);
	ll res= (m+tmp-1)/tmp * tmp;
	if(res<1ll*pow(10,n)) return res;
	else return -1;
}
main()
{
 	fast();
	int x,y,z; cin>>x>>y>>z>>n;
	cout<<solve(x,y,z,n);
}
