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
#define sort(a) sort(a.begin(),a.end())
#define sort1(a) sort(a.begin(),a.end(),greater<ll> ())
#define show(a) for(ll i:a) cout<<i<<" ";
#define line cout<<endl
using namespace std;
bool solve()
{
	int n,d;
	cin>>n>>d;
	vec a;
	int max = 0;
	ll sum = 0;
	a.pb(0);
	for(int i=0;i<n;i++)
	{
		int s;
		cin>>s;
		a.pb(s);
		sum =sum+s;
	}
	max =d;
	bool table[n+1][max+1];
	for(int i = 0; i<=n;i++)
	for(int j=0;j<=max;j++) table[i][j] = false;
	
	for(int i=0;i<=n;i++) table[a[i]][a[i]] = true; 
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=max;j++)
		{
			if(j>a[i])
			table[i][j] = table[i][j-a[i]];
		}
	}
	bool ans = false;
	for(int i=0;i<=n;i++)
	ans = ans|table[i][d];
	
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		bool f = solve();
		if(f) cout<<"YES";
		else cout<<"NO";
		line;
	}
	return 0;
}
