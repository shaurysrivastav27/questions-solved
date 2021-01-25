#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define ull usigned long long 
#define vec vector<ll>
#define vec1 vector<vector <ll>> 
#define set set<ll>
#define pb push_back
#define ld long double 
#define show(a) for(ll i : a) cout<<i<<" "
#define line cout<<endl
#define fastio ios::sync_with_stdio(0); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0) 
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
vec in;
ll temp;
ll fin[1000005];bool table[1000005];
void prime(){
	for (int i = 0; i <=1000000; i += 1)
	{
		table[i]= 1;
	}
	table[0]=table[1] = 0;
	for (int i = 2; i <=1000000; i += 1)
	{
		if(table[i]){
		for (int j = i; j<=1000000; j += i)
		{
			table[j] = 0;
		}
		table[i]= 1;
		}
	}
}
void inline solve(ll m) 
{
	int cnt = 0;
	for (int i = 5; i <=m; i += 1)
	{
		if(table[i]==1)
		{
			if(table[i-2]==1) cnt++;
		}
		fin[i] = cnt;
	}
}

int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

	fastio;
	//prime1();
	ll m = 0;
	
	prime();
	int t;cin>>t;while(t--)
	{
		cin>>temp;
    	in.pb(temp);
    	m = max(temp,m);
    }
    for (int i = 0; i <=m; i += 1)
		fin[i] = 0;
    solve(m);
    for (int i = 0; i < in.size(); i += 1)
    {
    	cout<<fin[in[i]]<<endl;
    }
}
