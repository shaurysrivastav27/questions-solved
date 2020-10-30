

https://codeforces.com/problemset/problem/1323/A

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
ll n,a[1000001],ans;
void inline solve() 
{
	cin>>n;
	ans = -1;
	for (int i = 0; i < n; i += 1)
	{
		cin>>a[i];
		if(a[i]%2==0 && a[i]!=0)
		ans = i+1;
	}
	if(ans!=-1) cout<<1<<endl<<ans<<endl;
	else
	{
		bool table[n]={false};
		int c =0;
		for (int i = 0; i < n; i += 1)
		{
			if(a[i]%2!=0) 
			{	
				table[i] = true;
				ans = i;
				c++;
			}
		}
		if(c==1) cout<<-1<<endl;
		else if(c%2==0) 
		{
			cout<<c<<endl;
			for (int i = 0; i < n; i += 1)
			{
				if(table[i]) cout<<i+1<<" ";
			}
			line;
		}
		else
		{
			cout<<c-1<<endl;
			for (int i = 0; i < ans; i += 1)
			{
				if(table[i]) cout<<i+1<<" ";
			}
			line;
		}
	}
}
int main()
{
	fastio;
	int t;cin>>t;
	while(t--)
    solve();
    return 0;
}
