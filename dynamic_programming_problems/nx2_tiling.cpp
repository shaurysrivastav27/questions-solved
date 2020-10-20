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


ll N = 1e6 + 5;
void ini(ll *table)
{
	for(int i=0;i<N;i++)
	table[i]= 0;
	
	table[0] = 0;
	table[1] = 1;
	table[2] = 2;
}

ll solve(ll n ,ll *table,ll k)
{
	if(table[n]!=0) return table[n];
	else
	{
		for(int i=k+1;i<=n;i++)
		{
			table[i]= table[i-1]+table[i-2];
		}
	}
	return table[n];
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll table[N] ;
    ini(table);
    int t;
    cin>>t;
    ll k = 0;
    while(t--)
	{
		ll n;
		cin>>n;
		cout<<solve(n,table,k)<<endl;
		if(k<n) k = n;
	}
    return 0;
}

