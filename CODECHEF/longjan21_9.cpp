#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll  long long
#define ull usigned long long 
#define vec vector<ll>
#define vec1 vector<vector <ll>> 
#define set set<ll>
#define pb push_back
#define ld long double 
#define show(a) for(ll i : a) cout<<i<<" "
#define line cout<<endl
#define fastio ios::sync_with_stdio(0); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define file  freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
ll n,m,v;
ll A[200000],B[200000];
vec a;
void inline solve() 
{
	cin>>n>>m;
	set fin;
	for (int i = 0; i < n; i += 1)
		cin>>A[i];
	for (int i = 0; i < m; i += 1)
		cin>>B[i];
	v=0;
	a.pb(v);
	fin.insert(0);
	ll temp;
	while(a.size())
	{
		v=a[a.size()-1];
		a.pop_back();
		for (int i = 0; i <n; i += 1)
		{
			temp = fin.size();
			fin.insert(v|A[i]);
			if(temp!=fin.size()) a.pb(v|A[i]);
		}	
		for (int i = 0; i <m; i += 1)
		{
			temp = fin.size();
			fin.insert(v&B[i]);
			if(temp!=fin.size()) a.pb(v&B[i]);
		}	
	}	
	ll ans = fin.size();
	cout<<ans;line;
}

int main()
{
	//file;
	fastio;
	int t;cin>>t;while(t--)
    solve();
}
