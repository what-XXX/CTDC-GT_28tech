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
int rev(int n)
{
	int tmp=0,res=n;
	while(n)
	{
		tmp=n%10+tmp*10;
		n/=10;
	}
	return tmp==res;
}
int sum(int n)
{
	int tong=0;
	while(n)
	{
		tong+=n%10;
		n/=10;
	}
	return tong;
}
int so(int n)
{
	int tmp=0;
	while(n)
	{
		tmp=n%10;
		if(tmp==6) return 1;
		n/=10;
	}
	return 0;
}
int sodep(int n)
{
	if(rev(n)&&so(n)&&sum(n)==8) return 1;
	else return 0;
}
main()
{
 	fast();
	int a, b; cin>>a>>b;
	FOR1(i,a,b){
		if(sodep(i)){
			cout<<i<<" ";
		}
	}
}
