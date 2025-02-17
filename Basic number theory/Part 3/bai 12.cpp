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
ll f[100];
void init()
{
	f[1]=1;
	f[0]=0;
	FOR1(i,2,92){
		f[i]=f[i-1]+f[i-2];
	}
}
main()
{
 	fast();
	cin>>t;
	init();
	while(t--){
		ll x; cin>>x;
		bool check=false;
		FOR1(i,0,92){
			if(x==f[i]){
				check = true;
				break;
			}
		}
		if(check) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
