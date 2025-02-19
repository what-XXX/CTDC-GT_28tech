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
void solve(char c[])
{
	FOR1(i,0,strlen(c)-1){
		if(c[i]=='0'&&c[i+1]=='8'&&c[i+2]=='4'){
			c[i]=c[i+1]=c[i+2]='z';
		}
	}
	FOR1(i,0,strlen(c)-1){
		if(c[i]!='z') cout<<c[i];
	}
	el;
}
main()
{
 	fast();
	cin>>t;
	while(t--)
	{
		char c[18]; cin>>c;
		solve(c);
	}
}
