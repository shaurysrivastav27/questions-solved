

https://codeforces.com/problemset/problem/702/A


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

void inline solve() 
{
	ll n;cin>>n;
	ll a[n];
	for (int i = 0; i < n; i += 1)
	cin>>a[i];
	
	bool table[n] = {false};
	
	for (int i = 0; i < n-1; i += 1)
	{
		if(a[i]>=a[i+1])  table[i+1] = false;
		else table[i+1] = true;
	} 
	//show(table);line;
	int ans = 0;
	for (int i = 0; i < n; i += 1)
	{
	int c = 1;
		if(i!=n-1 && table[i] == false)
		{
			for (int j=i+1; j < n; j += 1)
			{
				if(table[j] == true) c++;
				else break;
			}
		}
		ans = max(ans,c);
	}
	cout<<ans;
}
int main()
{
	fastio;
    solve();
    return 0;
}
