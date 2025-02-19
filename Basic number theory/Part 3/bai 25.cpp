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

//int n,k,t;

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
ll n;
vector<int>v;
int  solve(ll n,ll k)
{
	FOR1(i,2,sqrt(n)){
		while(n%i==0){
			v.pb(i);
			n/=i;
		}
	}
	if(n>1) v.pb(n);
	if(!v.empty()) return v[k-1];
	else return -1;
}
main()
{
 	fast();
	ll n,k; cin>>n>>k;
	cout<<solve(n,k);
}
