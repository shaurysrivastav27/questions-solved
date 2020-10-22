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
ll inf = 1e18+1;
/*
 - 0 1 2
 0 1 1 1
 1 1 1 1
 2 1 1 1
 
*/
void inline solve()
{
	int n;
	cin>>n;
	int a[n];
	vec ar;
	int c = 0;
	bool f = false;
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];
		if(a[i] == 0)
		{
			c++;
			if(i==0) f = true;
		}
		else
		{
			ar.pb(c);
			c = 0;
		}
	}
	int ans =0; 
	if(f) for(int i=1;i<ar.size();i++) ans = ans + ar[i];
	else for(int i=0;i<ar.size();i++) ans = ans + ar[i];
	
	cout<<ans<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    int k = 1;
    while(t--)
	{
		//cout<<"Case #"<<k<<": ";
		solve();
		k++;
	}
    return 0;
}
