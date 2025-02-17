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

int k,t;

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}

main()
{
 	fast();
	ll n; cin>>n;
	mii mp;
	while(n)
	{
		int tmp=n%10;
		if(tmp==2||tmp==3||tmp==5||tmp==7) {
			mp[tmp]++;
		}
		n/=10;
	}
	for(auto it:mp){
		cout<<it.first<<" "<<it.second;
		el;
	}
}
