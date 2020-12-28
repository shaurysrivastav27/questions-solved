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
 
void inline solve()
{
	string s;
	cin>>s;
	int c=0;
	int index = 0;
	int ans = 0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i] != s[index])
		{
			//cout<<c<<endl;
			index = i;
			ans = max(c,ans);
			c=1;
		}
		else
		{
			c++;
		}
	} 
	if(s[s.size()-1] == s[s.size()-2]) 	ans = max(ans,c);
	if(ans==0) ans = c; 
	cout<<ans<<endl;
}
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    solve();
    return 0;
}
