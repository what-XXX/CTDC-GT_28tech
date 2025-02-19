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
ll solve(int a, int b, int c)
{
	ll res=1;
	while(b!=0)
	{
		if(b%2==1) res*=a;
		b/=2;
		a*=a;
	}
	return res%c;
}
main()
{
 	fast();
	cin>>t;
	while(t--)
	{
		int a,b,c; cin>>a>>b>>c;
		cout<<solve(a,b,c);
		el;
	}
}
