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



ll solve()
{
	ll d,n;
	cin>>d>>n;
	ll a[n];
	
	for(ll i=0;i<n;i++) cin>>a[i];
	ll table[d+1];
	sort(a,a+n);
	
	for(int i=0;i<=d;i++)
	table[i] = inf;
	
	table[0] = 0;
	
	for(int i=0;i<n;i++)
	if(a[i]<=d)
	table[a[i]] = 1;
	
	if(table[d] !=inf)
	return table[d];
	
	for(int i=1;i<=d;i++)
	{
		ll ans = inf;
		for(int j=0;j<n;j++)
		{
			if(a[j] <= i)
			{
				ans = min(ans , table[i-a[j]]);
			}
			else break;
		}
		if(ans == inf)
		table[i] = inf;
		else 
		table[i] = ans+1;
	}
	if(table[d] == inf) return -1;
	else return table[d];
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //ini();
    int t;
    cin>>t;
    while(t--)
	{
		cout<<solve();
		line;
	}
    return 0;
}
