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
 
int n,k,t[maxn];
vector<bool> check;
 
void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
 long long powMod(ll a, int b){
	unsigned long long res=1;
	a%=Mod;
	while(b){
		if(b%2==1) {
			res=(res*a)%Mod;
		}
		a=(a*a)%Mod;
		b/=2;
		
	}
	return res;
}
 
main()
{
 	fast();
	cin>>n;
	cout<<powMod(2,n);
}