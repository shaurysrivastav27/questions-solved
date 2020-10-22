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
	int n;
	cin>>n;
	int k = n;
	int f = n%10;
	int ans = 0;
	int c=0;
	for(int i=1;i<=9;i++)
	{
		if(f == 1)
		{
			while(n)
			{
				n = n/10;
				c++;	
			}
			for(int i=1;i<=c;i++)
			ans = ans+i;
			break;
		}
		else if(f==i)
		{
			while(k)
			{
				k = k/10;
				c++;	
			}
			//cout<<c<<endl;
			for(int i=1;i<=4;i++)
			ans = ans + (f-1)*i;
			for(int i=1;i<=c;i++)
			{
				ans= ans +i;
			}
		 break;
		}
	}
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
		solve();
	}
    return 0;
}
