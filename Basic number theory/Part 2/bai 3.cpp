#include<bits/stdc++.h>
typedef long long ll;
#define FOR1(i,a,b) for(ll i=a; i<=b;i++)
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
vector<bool> check;
ll n;
void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
int p[maxn];
void pt()
{
	FOR1(i,1,maxn){
		p[i]=i;
	}
	FOR1(i,2,sqrt(maxn)){
		if(p[i]==i){
			for(int j=i*i;j<=maxn;j+=i){
				if(p[j]==j){
					p[j]=i;
				}
			}
		}
	}
}
main()
{
 	fast();
	pt();
	cin>>t;
	while(t--)
	{
		 cin>>n;
		set<int> se1;
		while(n!=1){
			se1.insert(p[n]);
			n/=p[n];
		}
		cout<<se1.size();
		el;
	}
}
