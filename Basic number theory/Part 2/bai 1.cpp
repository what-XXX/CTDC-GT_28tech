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

int k,t[maxn];
vector<bool> check;

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
void pt1(ll n)
{
	FOR1(i,2,sqrt(n)){
		while(n%i==0){
			cout<<i<<" ";
			n/=i;
		}
	}
	if(n>1) cout<<n;
}
void pt2(ll n)
{
	set<int>se;
	FOR1(i,2,sqrt(n)){
		while(n%i==0){
			se.insert(i);
			n/=i;
		}
	}
	if(n>1) se.insert(n);
	for(auto it:se){
		cout<<it<<" ";
	}
}
void pt3(ll n)
{
	FOR1(i,2,sqrt(n)){
		int m=0;
		while(n%i==0){
			m++;
			n/=i;
		}
		if(m!=0){
			cout<<i<<"("<<m<<")"<<" ";	
		}
	}
	if(n>1){
		cout<<n<<"("<<1<<")"<<" ";
	}
}
void pt4(ll n)
{
	FOR1(i,2,sqrt(n)){
		while(n%i==0){
			cout<<i;
			n/=i;
			if(n>1) cout<<"x";
		}
	}
	if(n>1) cout<<n;
}
void pt5(ll n)
{
	FOR1(i,2,sqrt(n)){
		int m=0;
		while(n%i==0){
			m++;
			n/=i;
		}
		if(m!=0){
			cout<<i<<"^"<<m;
			if(n>1) cout<<" * ";
		}
	}
	if(n>1) cout<<n<<"^1";
}
main()
{
 	fast();
	ll n; cin>>n;
	pt1(n);
	el;
	pt2(n);
	el;
	pt3(n);
	el;
	pt4(n);
	el;
	pt5(n);
}
