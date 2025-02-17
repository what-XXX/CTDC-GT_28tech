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
ll solve(int n, ll k)
{
	int x1=n/k;
	int x2=n%k;
	ll tong1=k*(k-1)/2;
	ll tong2=x2*(x2+1)/2;
	return tong1*x1+tong2;
}
main()
{
 	fast();
	cin>>t;
	while(t--)
	{
		ll k;
		cin>>n>>k;
		cout<<solve(n,k);
		el;
	}
}
