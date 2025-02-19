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
vector<int> v;
void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
int pt(int n)
{
	int tmp=0;
	int res=n;
	while(n!=0){
		tmp=n%10+tmp*10;
		n/=10;
	}
	return tmp==res;
}
int dem(int n)
{
	int res=0;
	FOR1(i,2,sqrt(n)){
		int cnt=0;
		while(n%i==0){
			++cnt;
			n/=i;
		}
		if(cnt!=0) ++res;
	}
	if(n>1) ++res;
	return res>=3;
}
main()
{
 	fast();
	ll a,b; cin>>a>>b;
	FOR1(i,a,b){
		if(pt(i)&&dem(i)) v.pb(i);
	}
	if(v.empty()) cout<<-1;
	else{
		FOR1(i,0,v.size()-1){
			cout<<v[i]<<" ";
		}
	}
}
