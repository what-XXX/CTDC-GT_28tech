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
bool check[maxn];

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
void sang()
{
	memset(check,true,maxn);
	check[0]=check[1]=false;
	FOR1(i,2,sqrt(maxn)){
		if(check[i]){
			for(int j=i*i;j<=maxn;j+=i){
				check[j]=false;
			}
		}
	}
}
main()
{
 	fast();
 	sang();
	cin>>n;
	int cnt=0;
	int i=2;
	while(cnt<=n){
		if(check[i]){
			cout<<i;
			el;
			++cnt;
		}
	}
}
