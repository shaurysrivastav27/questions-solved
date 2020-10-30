

https://codeforces.com/problemset/problem/996/A


#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define ull usigned long long 
#define vecu vector<ull> 
#define vec vector<ll>
#define vec1 vector<vector ll>>
#define arr array<ll,1000000> 
#define str string
#define set set<ll>
#define mset multiset<ll>
#define pair pair<ll,ll>
#define pb push_back
#define show(a) for(ll i : a) cout<<i<<" ";
#define show2(a,n,n1) for(ll i =1;i<=n;i++){ for(ll j=0;j<n1;j++) cout<<a[i][j]<<" ";cout<<endl;}
#define line cout<<endl
#define fastio ios::sync_with_stdio(0); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
ll inf = 1e18;
void inline solve() 
{
	ll d;cin>>d;
	ll a[5] = {1,5,10,20,100};
	int c = 0 ;
	while(d)
	{
		if(d>=a[4])
		{
			c = c+ (d/100);
			d = d%100;
		}
		if(d>=a[3])
		{
			c = c+ (d/20);
			d = d%20;
		}
		if(d>=a[2])
		{
			c = c+ (d/10);
			d = d%10;
		}
		if(d>=a[1])
		{
			c = c+ (d/5);
			d = d%5;
		}
		else
		{
			c = c+ d;
			d = 0;
		}
	}
	cout<<c;
}
int main()
{
	fastio;
    solve();
    return 0;
}
