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
int uoc(int n)
{
	int res=n;
	FOR1(i,2,n)
	{
		if(n%i==0){
			res=min(res,i);
		}	
	}
	return res;
}
main()
{
 	fast();
	cin>>t;
	while(t--)
	{
		ll k;
		cin>>n>>k;
		ll ans=0;
		if(n%2==0) ans=n+k*2;
		else{
			ans=n+uoc(n)+(k-1)*2;
		}
		cout<<ans; el;
	}
}
