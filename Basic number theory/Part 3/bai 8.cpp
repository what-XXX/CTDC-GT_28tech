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

int t;
ll n;
void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
bool nt(int n)
{
	FOR1(i,2,sqrt(n)){
		if(n%i==0){
			return false;
		}
	}
	return n>1;
}
ll hh[100];
int cnt=0;
void init()
{
	FOR1(i,2,32){
		if(nt(i)){
			int tmp=(int)pow(2,i)-1;
			if(nt(tmp)){
				hh[cnt]=1ll*(int)pow(2,i-1)*tmp;
				++cnt;
			}
		}
	}
}
main()
{
 	fast();
 	init();
	cin>>t;
	while(t--){
		cin>>n;
		bool ok=false;
		FOR1(i,0,cnt-1){
			if(n==hh[i]){
				ok=true;
				break;
			}
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
