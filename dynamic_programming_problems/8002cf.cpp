

https://codeforces.com/problemset/problem/1180/A

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
ll n;
void inline solve() 
{
	cin>>n;
	ll table[n+1] = {0};
	table[1] = 1;
	ll k = 4;
	for(int i=2;i<=n;i++)
	{
		table[i] = table[i-1] + k;
		k = (i)*4;
	}
	cout<<table[n];
}
int main()
{
	fastio;
	//int t;cin>>t;while(t--)
    solve();
    return 0;
}
