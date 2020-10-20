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

void solve()
{
	int A,B;
	cin>>A>>B;
	int q,b;
	if(A>B) 
	{
		q=A;
		b=B;
	}
	else
	{
		q =B;
		b =A;
	}
	str x = bitset<32>(q).to_string();
	str y = bitset<32>(b).to_string();
	vec a;
	for(int i=0;i<32;i++)
	{
		a.pb(0);
	}
	int k=0;
	for(int i=0;i<32;i++)
	if(x[i] == '1') 
	{
		k=i;
		break;
	}
	for(int i=k;i<32;i++)
	{
		int s = int(x[i]) -48 ;
		int s1 = int(y[i]) -48;
		if(s1 + s ==1)
		a[i] = 1;
		else if(s1+s == 2)
		a[i] =0;
		else
		a[i] = 0;
	}
	int ans = 0,f=1;
	for(int i=31;i>=0;i--)
	{
		ans  = ans + f*a[i];
		f = f*2;
	}
	cout<<ans<<endl;
}
/*
6 - 0110
12 -1100
x - 1010
*/
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

