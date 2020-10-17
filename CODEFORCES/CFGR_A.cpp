#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define vec vector<ll>
#define vec1 vector<vector ll>>
#define set set<ll>
#define mset multiset<ll>
#define pair pair<ll,ll>
#define pb push_back
void solve ()
{
	int n;
	cin>>n;
	vec a;
	int mx=0;
	for(int i=0;i<n;i++)
	{
	int s;
	cin>>s;
	a.pb(s);
	mx = s+mx;
	}
	int sum=0,f=0;
	if(mx>0)
	{
		sort(a.begin(),a.end(),greater<int> ());
		cout<<"YES"<<endl;
		for(int i:a) cout<<i<<" ";		
	}
	else if(mx<0)
	{
		sort(a.begin(),a.end());
		cout<<"YES"<<endl;
		for(int i:a) cout<<i<<" ";		
	}
	else cout<<"NO";
	cout<<endl;
}
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	solve();
	}
	return 0;
}
