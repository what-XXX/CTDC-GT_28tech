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
vector<bool> check;

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
int p[maxn];
void sang(){
	FOR1(i,1,maxn) p[i]=i;
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
vector<int>v;
main()
{
 	fast();
	cin>>t;
	sang();
	FOR1(i,1,t)
	{
		int n; cin>>n;
		mii mp;
		while(n!=1){
			mp[p[n]]++;
			n/=p[n];
		}
		cout<<"#TC"<<t<<":"<<" ";
		for(auto it:mp){
			cout<<it.fi<<"("<<it.second<<")"<<" ";
		}
		el;
	}
}
