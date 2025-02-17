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

const int maxn=1e6+1;
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
int nt[maxn];
void sang()
{
	memset(nt,true,maxn);
	nt[0]=nt[1]=false;
	FOR1(i,2,sqrt(maxn)){
		if(nt[i]){
			for(int j=i*i;j<=maxn;j+=i){
				nt[j]=false;
			}
		}
	}
 } 
ll fi[100];
void init()
{
	fi[1]=1;
	fi[0]=0;
	FOR1(i,2,92){
		fi[i]=fi[i-1]+fi[i-2];
	}
}
bool check(int n)
{
	init();
	FOR1(i,0,92){
		if(n==fi[i]) return true;
	}
	return false;
}
int tong(int n)
{
	int sum=0;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}
main()
{
 	fast();
	ll a,b; cin>>a>>b;
	init();
	sang();
	vector<int> v;
	FOR1(i,a,b){
		if(nt[i]&&check(tong(i))) v.pb(i);
		
	}
	if(v.size()!=0){
		FOR1(i,0,v.size()-1) cout<<v[i]<<" ";
	}
	else cout<<-1;
}
