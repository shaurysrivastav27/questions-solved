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
#define line cout<<endl 
using namespace std::chrono; 
int N = 2e7+5;
ll inf = 1e18;
vec table;
ll solve(ll n) 
{
	if(n==1) return 0;
    else 
    {
    	for (int i=4; i<=n; i++) 
    	{ 
       		ll ans = inf;
       		for(int j=1;j<=3;j++)
       		{
       			if(j==1) ans = min(ans,table[i-1]);
       			else if(i%j==0) ans = min(ans,table[i/j]);
       		}
       
       		table[i] = ans +1;
    	} 
    }
    return table[n]; 
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	freopen("/home/shaury/input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	int k=1;
	auto start = high_resolution_clock::now(); 
	vec a;
	ll max1 = 0;
	int tc = t;
	while(t--)       //min/max query
	{
		ll n;
		cin>>n;
		a.pb(n);
		if(max1<n) max1 = n;
	}
	for(int i=0;i<=max1;i++) table.pb(0);
    table[1] = 0;
    table[2] = 1;
    table[3] = 1;
	solve(max1);//solving for max query in order to calculate all the tables below 
	while(tc--)
	{
		cout<<"Case "<<k<<": "<<table[a[k-1]];
		line;
		k++;
	}
	/*auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start); 
    cout << "Time taken by function: "<< duration.count() << " microseconds" << endl; 
	*/return 0;
}
