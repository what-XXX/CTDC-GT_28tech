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

int tong1(int n)
{
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int smith(int n)
{
	int sum1=tong1(n);
	int sum2=0;
	int tmp=n;
	FOR1(i,2,sqrt(n)){
		while(n%i==0){
			sum2=tong1(i);
			n/=i;
		}
	}
	if(tmp==n) return 0;
	if(n!=1){
		sum2+=tong1(n);
	}
	return sum1==sum2;
}
main()
{
 	fast();
	cin>>t;
	//sang();
	while(t--)
	{
		cin>>n;
		if(smith(n)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
