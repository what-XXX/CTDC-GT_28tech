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
ll rev(ll n)
{
	ll res=0;
	while(n)
	{
		res=n%10+res*10;
		n/=10;
	}
	return res;
}
void solve(ll n)
{
	int cnt2=0,cnt3=0,cnt5=0,cnt7=0;
	ll m=rev(n);
	while(n)
	{
		int tmp=n%10;
		if(tmp==2) ++cnt2;
		else if(tmp==3) ++cnt3;
		else if(tmp==5)++cnt5;
		else if(tmp==7)++cnt7;
		n/=10;
	}
	while(m)
	{
		int r=m%10;
		if(r==2&&cnt2!=0){
			cout<<"2"<<" "<<cnt2;
			cnt2=0;
			el;
		}
		else if(r==3&&cnt3!=0){
			cout<<"3"<<" "<<cnt3;
			cnt3=0;
			el;
		}
		else if(r==5&&cnt5!=0){
			cout<<"5"<<" "<<cnt5;
			cnt5=0;
			el;
		}
		else if(r==7&&cnt7!=0){
			cout<<"7"<<" "<<cnt7;
			cnt7=0;
			el;
		}
		m/=10;
	}
}
main()
{
 	fast();
	ll n; cin>>n;
	solve(n);
}
