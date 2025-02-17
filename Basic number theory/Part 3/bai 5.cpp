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
ll sum( ll n ){
	ll tong =0;
	FOR1(i,1,sqrt(n)){
		if(n%i==0){
			tong+=i;
			if(i!=n/i){
				tong+=n/i;
			}
		}
	}
	return tong;
}
main()
{
 	fast();
	cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		cout<<sum(n);
		el;
	}
		
}
