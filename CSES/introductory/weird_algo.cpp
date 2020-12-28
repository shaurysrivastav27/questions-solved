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
	ll n;cin>>n;
	while(n!=1)
	{
		if(n%2==0) 
		{
			cout<<n<<" ";
			n=n/2;
		}
		else
		{
			cout<<n<<" ";
			n = n*3 +1;
		}
	}
	cout<<1<<" ";
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
