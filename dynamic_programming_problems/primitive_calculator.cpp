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
#define show2(a,n,n1) for(ll i =0;i<n;i++){ for(ll j=0;j<n1;j++) cout<<a[i][j]<<" ";cout<<endl;}
#define line cout<<endl
ll inf = 1e18 +1;
int N = 1e6+5;
ll table[1000001];

void solve()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	table[i] = inf;
	table[1] = 0;
	table[2] = 1;
	table[3] = 1;
	vec a;
	a.pb(n);
	for(int i=4;i<=n;i++)
	{
		bool flag = false;
		if(i==n) flag = true;
		ll ans = inf;
		ll tmp = 0 ,ok=ans;
		if(i%2==0) 
		{	
			ans = min(ans,table[i/2]);
			if(ans!=ok)
			{
				ok = ans;
				tmp = i/2;
			}
		}
		if(i%3==0) 
		{
			ans = min(ans,table[i/3]);
			if(ans!=ok)
			{
				ok = ans;
				tmp = i/3;
			}
		}
		else 
		{
			ans = min(ans , table[i-1]);
			if(ans!=ok)
			{
				ok = ans;
				tmp = i-1;
			}
		}
		if(flag) a.pb(tmp);
		table[i] = ans+1;
	}
	cout<<table[n]<<endl;
	while(n!=1)
	{
		ll ans = inf;
		ll tmp = 0 ,ok=ans;
		if(n%2==0) 
		{	
			ans = min(ans,table[n/2]);
			if(ans!=ok)
			{
				ok = ans;
				tmp = n/2;
			}
		}
		if(n%3==0) 
		{
			ans = min(ans,table[n/3]);
			if(ans!=ok)
			{
				ok = ans;
				tmp = n/3;
			}
		}
		else 
		{
			ans = min(ans , table[n-1]);
			if(ans!=ok)
			{
				ok = ans;
				tmp = n-1;
			}
		}
		n = tmp;
		a.pb(tmp);
	}
	
	show(a);
	line;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //ini();
	solve();
    return 0;
}
