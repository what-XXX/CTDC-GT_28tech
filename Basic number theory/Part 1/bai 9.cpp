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
int gcd(int a, int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
bool check1(int a, int b)
{
	if(gcd(a,b)==1&&a!=b) return true;
	else return false;
}
main()
{
 	fast();
	int a,b; cin>>a>>b;
	FOR1(i,a,b-1){
		for(int j=i+1;j<=b;j++){
			if(check1(i,j)){
				cout<<"("<<i<<","<<j<<")";
				el;
			}
		}
	}
	
}
