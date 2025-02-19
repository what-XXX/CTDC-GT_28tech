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

const int maxn=1e6+1;
const long long Mod=1e9+7;
const ll INF = 1e18;

int k,t;

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
ll p[maxn],ans[maxn];
void sang()
{
	FOR1(i,1,maxn){
		p[i]=i;
	}
	FOR1(i,2,maxn){
		if(p[i]==i){
			p[i]=i-1;
			for(int j=i*2;j<=maxn;j+=i){
				p[j]=p[j]-p[j]/i;
			}
		}
	}
}
void solve()
{
	FOR1(i,1,maxn){
		for(int j=i;j<=maxn;j+=i){
			ans[j]+=i*p[i]*1ll;
		}
	}
}
main()
{
 	fast();
	cin>>t;
	sang();
	solve();
	while(t--)
	{
		ll n;cin>>n;
		cout<<1ll*(ans[n]+1)*n/2;
		el;
	}
}
