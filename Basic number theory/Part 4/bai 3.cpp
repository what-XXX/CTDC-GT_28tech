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

int n,t;

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
ll res(int n, ll k)
{
	ll x1=n/k;
	ll x2=n%k;
	ll t1=k*(k-1)/2;
	ll t2=x2*(x2+1)/2;
	return t1*x1+t2;
}
main()
{
 	fast();
	cin>>t;
	while(t--)
	{
		ll k; cin>>n>>k;
		if(res(n,k)==k) cout<<"1\n";
		else cout<<"0\n"; 
	}
}
