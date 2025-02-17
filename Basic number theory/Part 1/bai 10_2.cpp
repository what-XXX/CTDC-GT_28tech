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

int n,k;
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
	memset(nt, true, maxn);
	nt[0]=nt[1]=false;
	FOR1(i,2,sqrt(maxn)){
		if(nt[i]){
			for(int j=i*i;j<=maxn;j+=i){
				nt[j]=false;
			}
		}
	}
}
main()
{
 	fast();
	int t; cin>>t;
	sang();
	while(t--)
	{
		cin>>n;
		FOR1(i,1,sqrt(n)){
			if(nt[i]){
				cout<<i*i<<" ";
			}
		}
		el;
	}
}
