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
	int ok=0;
	FOR1(i,0,strlen(c)-1){
		if(c[i]=='1') ok=1;
		else if(!(c[i]=='8'||c[i]=='9'||c[i]=='0')) {
			ok=0;
			break;
		}
	}
	if(!ok){
		cout<<"INVALID\n";
		return;
	}
	ok=0;
	FOR1(i,0,strlen(c)-1){
		if(c[i]=='1'){
			cout<<'1';
			ok=1;
		}
		else if(ok!=0){
			cout<<'0';
		}
	}
	el;
}
main()
{
 	fast();
	cin>>t;
	while(t--){
		char c[20];
		cin>>c;
		solve(c);
	}
}
