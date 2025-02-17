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
int gt(int n)
{
	int res=1;
	FOR1(i,1,n){
		res*=i;
	}
	return res;
}
int strong(int n)
{
	int sum=0,tmp=n;
	while(n)
	{
		sum+=gt(n%10);
		n/=10;
	}
	if(sum==tmp) return 1;
	else return 0;
}
main()
{
 	fast();
	int a,b; cin>>a>>b;
	bool check=false;
	FOR1(i,a,b){
		if(strong(i)){
			cout<<i<<" ";
			check=true;
		}
	}
	if(!check) cout<<-1<<" ";
}
