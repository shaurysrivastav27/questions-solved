#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll  long long
#define ull usigned long long 
#define vecu vector<ull> 
#define vec vector<ll>
#define vec1 vector<vector <ll>> 
#define set set<ll>
#define mset multiset<ll>
#define pair pair<ll,ll>
#define pb push_back
#define ld long double 
#define show(a) for(ll i : a) cout<<i<<" "
#define show2(a,n,n1) for(ll i =0;i<n;i++){ for(ll j=0;j<n1;j++) cout<<a[i][j]<<" ";cout<<endl;}
#define line cout<<endl
#define fastio ios::sync_with_stdio(0); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define file  freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 

ll N,m,x,n,p;
vec a;
vec1 b;
void inline solve() 
{
	cin>>N;
	for (int i = 0; i < N; i += 1)
	{
		cin>>m;
		for (int j = 0; j < m; j += 1)
		{
			cin>>x;
			a.pb(x);
		}
		b.pb(a);
		a.clear();
	}
	n=p=0;
	for (int i = 0; i < N; i += 1)
	{
		for (int j = 0; j <b[i].size(); j += 1)
		{
			if(b[i][j]<0) n++;
			else p++;
		}
	}
	b.clear();
	ll ans = n*p;
	cout<<ans<<endl;
}

int main()
{
	//file;
	fastio;
	//auto init = high_resolution_clock::now(); 
	int t;cin>>t;while(t--)
    solve();
    //auto stop = high_resolution_clock::now(); 
	//auto duration = duration_cast<microseconds>(stop-init); 
	//cout <<"time: "<<duration.count() << endl; 
    return 0;
}
