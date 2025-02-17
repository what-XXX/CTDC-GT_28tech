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
int slp(int n)
{
	int res=0;
	while(n)
	{
		int tmp=n%10;
		if(tmp==0&&tmp==6&&tmp==8) return 1;
		n/=10;
	}
	if(n==0&&n==6&&n==8) return 1;
	return 0;
}
main()
{
 	fast();
	cin>>n;
	if(slp(n)) cout<<1;
	else cout<<0;
}
