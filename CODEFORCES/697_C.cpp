#include<bits/stdc++.h>
using namespace std;
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
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
ll a,b,k,x,cnt1,cnt2,cnt3;
ll p[200005],q[200005],A[200005],B[200005];
ll fun(ll X,ll Y)
{
	return X+(2*Y);
}
void inline solve() 
{
	cin>>a>>b>>k;
	for (int i = 0; i <=a ; i += 1) A[i] = 0;
	for (int i = 0; i <=b ; i += 1) B[i] = 0;
	
	cnt3=cnt2=cnt1=0;
	bool ok=false,ok2 = false;
	for (int i = 0; i < k; i += 1)
	{
		cin>>p[i];
		A[p[i]]++;
		if(i!=0 && p[i]!=p[i-1]) ok =true;
	}
	for (int i = 0; i < k; i += 1)
	{
		cin>>q[i];
		B[q[i]]++;
		if(i!=0 && p[i]!=p[i-1]) ok2 = true;
	}
	ll ans = 0;
	for (int i = 0; i < k; i += 1)
	{
		ans= ans+ k+1 - A[p[i]] - B[q[i]];
	}
	cout<<ans/2;
	line;
}

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

	fastio;
	int t;cin>>t;while(t--)
    solve();
}
