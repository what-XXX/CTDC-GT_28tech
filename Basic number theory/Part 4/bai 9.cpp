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

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
main()
{
 	fast();
	char c[1000005];
	cin>>c;
	int r=0;
	if(strlen(c)==1) r=(c[0]-'0')%4;
	else{
		r=(c[strlen(c)-1]-'0')*10+c[strlen(c)-1];
	}
	if(r==0) cout<<"4";
	else cout<<"0";
}
