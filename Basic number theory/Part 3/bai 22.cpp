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
int nt(int n)
{
	FOR1(i,2,sqrt(n)){
		if(n%i==0) return 0;
	}
	return n>1;
}
int tach(int n)
{
	int tmp=0;
	int maxDigit=n%10;
	while(n)
	{
		tmp=n%10;
		if(tmp>maxDigit) return 0;
		n/=10;
	}
	return 1;
}
main()
{
 	fast();
	cin>>n;
	FOR1(i,2,n-1){
		if(nt(i)&&tach(i)) cout<<i<<" ";
	}
}
