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

int n,k,t[maxn];
vector<bool> check;

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
bool nt[maxn];
void sang()
{
	memset(nt,true,maxn);
	nt[0]=nt[1]=false;
	FOR1(i,2,sqrt(maxn)){
		if(nt[i]){
			for(int j=i*i; j<=maxn;j+=i){
				nt[j]=false;
			}
		}
	}
}
bool check1(int n)
{
	sang();
	int tmp=0;
	//int sum=0;
	while(n!=0){
		tmp=n%10;
		if(!nt[tmp]) return false;
		//else return true;
		n/=10;
	}
	return true;
}
ll tong(int n)
{
	int sum=0;
	while(n!=0){
		int tmp=n%10;
		sum+=tmp;
		n/=10;
	}
	return sum;
}
main()
{
 	fast();
 	sang();
	int q; cin>>q;
	while(q--){
		int x,y; cin>>x>>y;
		int cnt=0;
		FOR1(i,x,y){
			if(nt[i]&&check1(i)&&nt[tong(i)]) ++cnt;
		}
		cout<<cnt; el;
	}
}
