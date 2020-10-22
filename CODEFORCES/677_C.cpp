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

void inline solve()
{
	int n;
	cin>>n;
	ll a[n];
	ll max1 = 0;
	vec ar;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(max1<=a[i])
		{
			if(a[i]==max1) ar.pb(i+1);
			else {
			ar.pb(i+1);
			max1 = a[i];
			}
		}
	}
	bool flag= false;
	int ans = 0;
	for(int index=0;index<ar.size();index++)
	{
		if(ar[index] == 1 && a[ar[index]-1] == max1)
		{
			if(a[ar[index]] <max1) {
			flag = true;
			ans = ar[index];
			break;
			}
		}
		 
		else if(a[ar[index]-1] == max1 && ar[index] == n)
		{
			if(a[ar[index]-2] < max1) {
			flag = true;
			ans = ar[index];
			break;
			}
		}
		else if(a[ar[index]-1] == max1)
		{
			if(a[ar[index]-2]!=max1 || a[ar[index]]!=max1) {
			flag = true;
			ans = ar[index];
			break;
			}
		}
	}
	if(flag) cout<<ans<<endl;
	else cout<<-1<<endl;
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
