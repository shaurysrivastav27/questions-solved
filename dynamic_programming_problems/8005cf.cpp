

https://codeforces.com/problemset/problem/894/A

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

void inline solve() 
{
	string s;cin>>s;
	vec a,b;
	for (int i = 0; i < s.size(); i += 1)
	{
		if(s[i]=='Q') a.pb(i);
		else if(s[i] == 'A') b.pb(i);
	}
	int c= 0;
	for (int i = 0; i < a.size(); i += 1)
	{
		for (int j = 0; j < b.size(); j += 1)
		{
			if(b[j] > a[i]){
			for(int k = 0;k<a.size();k++)
			{
				if(a[k] > b[j]) c++;	
			}
			}
		}
	}
	cout<<c<<endl;
}
int main()
{
	fastio;
	//int t;cin>>t;while(t--)
    solve();
    return 0;
}
