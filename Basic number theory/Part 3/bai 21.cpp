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
int rev(int n)
{
	int tmp=n, ans=0;
	while(n)
	{
		ans=ans*10+n%10;
		n/=10;
	}
	return ans==tmp;
}
int chua9(int n)
{
	while(n){
		if(n%10==9) return 0;
		n/=10;
	}
	return 1;
}
main()
{
 	fast();
	cin>>n;
	FOR1(i,2,n-1){
		if(rev(i)&&chua9(i)) cout<<i<<" ";
	}
}
