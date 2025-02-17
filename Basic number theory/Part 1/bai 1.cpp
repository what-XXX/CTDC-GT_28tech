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

int k,t[maxn];
vector<bool> check;

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
bool check1(ll n){
	if(n<2) return false;
	for(ll i=2; i<=n;i*=i){
			if(n%i==0){
				return false;
		}
	}
	return true;
}

main()
{
 	fast();
	ll n; cin>>n;
	if(check1(n)) cout<<"YES";
	else cout<<"NO";
}
