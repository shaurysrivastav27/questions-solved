#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define ull usigned long long 
#define vecu vector<ull> 
#define vec vector<ll>
#define vec1 vector<vector <ll>> 
#define set set<ll>
#define mset multiset<ll>
#define pair pair<ll,ll>
#define pb push_back
#define show(a) for(ll i : a) cout<<i<<" "
#define show2(a,n,n1) for(ll i =0;i<n;i++){ for(ll j=0;j<n1;j++) cout<<a[i][j]<<" ";cout<<endl;}
#define line cout<<endl
#define fastio ios::sync_with_stdio(0); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define file  freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
//#pragma GCC optimize("Ofast")  
//#pragma GCC target("avx,avx2,fma") 
string s,t;
ll n,cnt;
vector<char> a;
vector<vector<char>> b;
void inline solve() 
{
	
	cin>>s;
	for (int i = 0; i < s.size(); i += 1)
	{
		a.pb(s[i]);
	}
	cnt = 0;
	sort(a.begin(),a.end());
	do { 
        b.pb(a);
        cnt++;
    } while (next_permutation(a.begin(), a.end())); 
	cout<<cnt<<endl;
	for (int i = 0; i < cnt; i += 1)
	{
		for (int j = 0; j < a.size(); j += 1)
		{
			cout<<b[i][j];
		}
		line;
	}
}

int main()
{
	//file;
	fastio;
	//int t;cin>>t;while(t--)
    solve();
    return 0;
}
