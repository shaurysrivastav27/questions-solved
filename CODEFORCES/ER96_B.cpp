#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define vec vector<ll>
#define vec1 vector<vector ll>>
#define set set<ll>
#define mset multiset<ll>
#define pair pair<ll,ll>
void solve()
{
	ll n,k;
	cin>>n>>k;
	vec a;
	for(int i=0;i<n;i++)
	{
		int s;
		cin>>s;
		a.push_back(s);
	}
	sort(a.begin(),a.end());
	int l=a.size()-1,j=a.size()-1;
	for(int i=0;i<k;i++)
	{
		a[j] = a[j]+a[l-1];
		l--;
	}
	cout<<a[j]<<endl;
	
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

