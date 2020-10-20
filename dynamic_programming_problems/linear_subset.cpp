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
#define sort1(a) sort(a.begin(),a.end(),greater<ll> ())
#define show(a) for(ll i:a) cout<<i<<" ";
#define line cout<<endl

bool solve()
{
	int n,d;
	cin>>n>>d;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	bool table[d+1] = {false};
	sort(a,a+n);
	table[0] =true;	
	for(int i=0;i<n;i++)
	{
		for(int j=d;j>=a[i];j--)
		{
			if(table[j] =1) continue;
			else table[j] = table[j-a[i]];
			//cout<<j<<" "<<j-a[i]<<" "<<table[j]<<endl;
		}
	}
	show(table);
	return table[d];
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

