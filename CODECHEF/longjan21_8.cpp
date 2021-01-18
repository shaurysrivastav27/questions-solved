#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll  long long
#define ull usigned long long 
#define vecu vector<ull> 
#define vec vector<ll>
#define vec1 vector<vector <ll>> 
#define set set<ll>
#define pb push_back
#define ld long double 
#define show(a) for(ll i : a) cout<<i<<" "
#define line cout<<endl
#define fastio ios::sync_with_stdio(0); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define file  freopen("/home/shaury/Desktop/pvsc/cpcfcc/CC/input.txt","r",stdin);freopen("outputD.txt","w",stdout)
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
ll n,x,y,ans,mini,cnt0,cnt1;		 ll table[2][1005], a[1005];	string s;	std::vector<string> v;		int inf = INT_MAX;
void inline ini()
{
	for (int i = 0; i <=1000; i += 1)
	{
		table[0][i]=inf;
		table[1][i]=inf;
		v[i]=s;
	}
	table[0][0]=table[1][0]=0;
}
int inline solve() 
{
	s="";
	cin>>n>>x>>y;
	mini=inf;
	for (int i = 0; i < n; i += 1)
	{
		cin>>a[i];
		s=s+'0';
		mini=min(mini,a[i]);
	}
		cnt0=cnt1=0;
		ini();
		for (int i = 0; i < n; i += 1)
		{
			for (int j = y; j >=mini; j--)
			{
				if(j-a[i]>=0 && table[0][j-a[i]]!=inf)
				{
						v[j-a[i]][i]='1';
						cnt1=table[1][j-a[i]]+1;
						cnt0=count(v[j-a[i]].begin(),v[j-a[i]].begin()+cnt1,'1');
						v[j-a[i]][i]='0';
						if(table[0][j]==inf || cnt1-cnt0 < table[0][j])
						{
							table[0][j]=cnt1-cnt0;
							table[1][j]=table[1][j-a[i]]+1;
							v[j]=v[j-a[i]];
							v[j][i]='1';
						}
				}
			}
		}
		ans=inf;
		for (int i = x; i <=y; i += 1)	ans =min(ans,table[0][i]);
		if(ans==inf) return -1;
		else return ans;
}

int main()
{
	//file;
	fastio;
	s="0";
	for (int i = 0; i <=1005; i += 1)
		v.pb(s);

	int t;cin>>t;while(t--)
    	cout<<solve()<<endl;
}
