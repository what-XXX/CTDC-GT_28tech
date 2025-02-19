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
vector<int> v;

int solve(int n)
{
	int tmp=0,cnt=0;
	while(n)
	{
		tmp=n%10;
		++cnt;
		n/=10;
	}
	if(n>1) ++cnt;
	return cnt;
}

main()
{
 	fast();
 	cin>>n;
 	int x=solve(n);
 	//cout<<x;
 	int tmp=0,sum=0, res=n;
 	while(n){
 		tmp=n%10;
 		sum+=pow(tmp,x);
 		n/=10;
	 }
	if(sum==res) cout<<1;
	else cout<<0;
	
}
