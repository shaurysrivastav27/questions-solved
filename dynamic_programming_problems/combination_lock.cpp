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
ll inline solve()
{
	ll n ,w ;
	cin>>w>>n;
	vec a;
	ll inf = 1e18+1;
	for(ll i=0;i<w;i++)
	{
		ll s;
		cin>>s;
		a.pb(s);
	}
	ll table[w];
	
	for(ll i =0;i<w;i++)
	table[i] =inf;
	ll global_min = inf;
	for(ll i=0;i<w;i++)
	{
		//cout<<a[i]<<endl;
		ll sum =0;
		for(ll j=0;j<w;j++)
		{
			ll m1,m2,m,d;
			m1 = a[j] + n- a[i];
			m2 = a[i] + n- a[j];
			m = min(m1,m2);
			d = abs(a[j] -a[i]);
			ll min1 = min(m,d);
			//cout<<d<<" "<< m<<" ";
			if(i!=j)
			{
				sum = sum + min(m,d);
				if(i>0)
				{
					if(sum>global_min)
					break;
				}
			}
		}
		table[i] = min(table[i],sum);
		global_min = min(global_min,table[i]);
		//cout<<table[i]<<endl;
	}
	return global_min;
	
} 
int main()
{
	struct node;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll t;
    cin>>t;
    ll k =1;
    while(t--)
    {
    	ll ans = solve();
    	cout<<"Case #"<<k<<": "<<ans<<endl;
    	k++;
    }
    return 0;
}
