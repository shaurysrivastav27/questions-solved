
https://codeforces.com/problemset/problem/910/A


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
	ll n,d;cin>>n>>d;
	string s;cin>>s;
	bool table[n] = {false};
	
	for (int i = 0; i < n; i += 1)
		if(s[i] == '1') table[i]= true;
	int c = 0,k = n-1;
	while(true)
	{
		bool ok = false;
		for(int j = d;j >=1;j--)
		{
			if(k>=j)
			if(table[k-j] == true) 
			{
				c++;	
				ok = true;
				k = k-j;
				break;
			}
		}
		if(!ok) break;
		if(k==0) break;
	}
	if(k!=0) cout<<-1;
    else cout<<c<<endl;
}
int main()
{
	fastio;
	//int t;cin>>t;while(t--)
    solve();
    return 0;
}
