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
bool check1(string s)
{
	int n=s.size();
	int x1=s[n-1]-'0';
	int x2=s[0]-'0';
	if(x2==2*x1||2*x2==x1) return true;
	else return false;
}
bool check2(string s)
{
	string tmp=s.substr(1,s.size()-2);
	string res=tmp;
	reverse(tmp.begin(),tmp.end());
	if(res==tmp) return true;
	else return false;
}
main()
{
 	fast();
	cin>>t;
	while(t--)
	{
		string s; cin>>s;
		if(check1(s)&&check2(s)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
