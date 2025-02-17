#include <bits/stdc++.h>
const int N=60;
using namespace std;
int n;
long long a[N+5][N+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    a[0][0]=1;
    for(int i=1;i<n;++i){
        a[i][0]=1;
        for(int j=1;j<n;++j){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(a[i][j]!=0)cout<<a[i][j]<<' ';
        }
        el;
    }
}