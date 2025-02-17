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
int a, b;

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}

void sang(int a, int b)
{
	bool check[b-a+1];
	memset(check,true,b-a);
	FOR1(i,2,sqrt(b)){
		for(int j=max(i*i,(a+i-1)/i * i);j<=b;j+=i){
			check[j-a]=false;
		}
	}
	FOR1(i,max(2,a),b){
		if(check[i-a]){
			cout<<i<<" ";
		}
	}
}
main()
{
 	fast();
	int a,b; cin>>a>>b;
	sang(a,b);
}
