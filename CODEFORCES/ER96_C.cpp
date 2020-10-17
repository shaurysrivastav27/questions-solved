#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define vec vector<ll>
#define vec1 vector<vector ll>>
#define set set<ll>
#define mset multiset<ll>
#define pair pair<ll,ll>
#define pb push_back
/*
1 2 3 4 
j=3
1 3 3 
j=2 
1 3
j=1 
2
*/
void solve()
{
	int n;
	cin>>n;
	vec a,b;
	for(int i=1;i<=n;i++)
	{
		a.pb(i);
		b.pb(i);
	}	
	int j=n-1;
	for(int i=0;i<n-1;i++)
	{
		if((b[j]+b[j-1])%2==0) b[j-1] = (b[j-1]+b[j])/2;
		else b[j-1] = (b[j]+1+b[j-1])/2;
		j--;
	}
	cout<<b[0]<<endl;
	j = n-1;
	for(int i=0;i<n-1;i++)
	{
		if((a[j]+a[j-1])%2==0) 
		{
			cout<<a[j]<<" "<<a[j-1]<<endl;
			a[j-1] = (a[j-1]+a[j])/2;
			j--;
		}
		else 
		{
			cout<<a[j]<<" "<<a[j-1]<<endl;
			a[j-1] = (a[j]+1+a[j-1])/2;
			j--;
		}
	}
}	


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
    	solve();
    }
    return 0;
}

