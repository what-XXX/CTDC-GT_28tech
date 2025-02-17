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

int k,t;

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
char a[10000001],n[10000001];
main()
{
 	fast();
	
	cin>>a>>n;
	int tmp=a[strlen(a)-1]-'0';
	if(tmp==1||tmp==6||tmp==5||tmp==0){
		cout<<tmp;
		return 0;
	}
	int r;
	if(strlen(n)==1) r=n[0]-'0';
	else r=(n[strlen(n)-2]-'0')*10+n[strlen(n)-1]-'0';
	int r2[4]={6,2,4,8};
	int r3[4]={1,3,9,2};
	int r4[4]={6,4,6,4};
	int r7[4]={1,7,9,3};
	int r8[4]={6,8,4,2};
	int r9[4]={1,9,1,9};
	r%=4;
	if(tmp==2) cout<<r2[r];
	else if(tmp==3) cout<<r3[r];
	else if(tmp==4) cout<<r4[r];
	else if(tmp==7) cout<<r7[r];
	else if(tmp==8) cout<<r8[r];
	else if(tmp==9) cout<<r9[r];
}
