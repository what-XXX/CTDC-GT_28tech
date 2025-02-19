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
ll solve(int n, int k)
{
	int x=k/(n-1);
	int r=k%(n-1);
	if(r==0) return 1ll*x*n-1;
	else return 1ll*n*x+r;
}
main()
{
 	fast();
	cin>>t;
	while(t--)
	{
		int n,k; cin>>n>>k;
		cout<<solve(n,k);
		el;
	}
}
