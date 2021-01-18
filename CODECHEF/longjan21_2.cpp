#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
#define ll  long long
#define ull usigned long long 
#define vecu vector<ull> 
#define vec vector<ll>
#define vec1 vector<vector <ll>> 
#define set set<ll>
#define mset multiset<ll>
#define pair pair<ll,ll>
#define pb push_back
#define ld long double 
#define show(a) for(ll i : a) cout<<i<<" "
#define show2(a,n,n1) for(ll i =0;i<n;i++){ for(ll j=0;j<n1;j++) cout<<a[i][j]<<" ";cout<<endl;}
#define line cout<<endl
#define fastio ios::sync_with_stdio(0); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define file  freopen("input.txt","r",stdin);freopen("output.txt","w",stdout)
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
ll table[10005],a[4005];
void inline ini()
{
	for (int i = 0; i <10005; i += 1)
		table[i] =0;
}

	std::vector<string> v;
	string s;
	ll f,ans,ans1,n,k,cnt,cnt1,temp,sum,ind;
	
int inline solve() 
{
	cin>>n>>k;
	cnt=sum=cnt1=0;s="";
	v.clear();ini();
	for (int i = 0; i < n; i += 1)
	{
		cin>>a[i];
		if(a[i]>=k) cnt++;
		if(sum<10005) sum= sum+a[i];
		s=s+'0';
	}
	if(n==1 || sum< (2*k)) return -1;
	else if(cnt>=2) return 2;
	else
	{
		ini();
		sum = min(sum,min((2*k),10000LL));
		ans=ans1=INT_MAX;
		for (int i = 0; i <=sum; i += 1)
			v.pb(s);
		sort(a,a+n,greater<ll>());
		for (int i = 0;i<n;i++)
		{
			for (int j = sum; j>0 ; j--)
			{
				if(j-a[i]<0) continue;
				else if(j-a[i]==0) 
				{
					table[j] = 1;
					v[j] = s;v[j][i]='1';
				}
				else if(table[j-a[i]]!=0)
				{
					if(table[j]==0 || table[j]>table[j-a[i]]+1) 
					{
						table[j] =table[j-a[i]]+1;
						v[j]=v[j-a[i]];
						v[j][i]='1';
					}
				}
			}
		}
			for (int i = k; i <=sum; i += 1)
			{
				if(table[i]!=0 && table[i]<ans)
				{
						ans = table[i];
						ind = i;
				}
			}
			if(ans==INT_MAX) return -1;
			else
			{
				for (int i = 0; i <n; i += 1)	
					if(v[ind][i]=='1') 
						a[i]=0;
				ini();v.clear();
				for (int i =0;i<n;i++)
				{
					if(a[i]!=0)
					{	
						for (int j = sum; j >0; j--)
						{
							if(j-a[i]<0) continue;
							else if(j-a[i]==0) table[j] = 1;
							else if(table[j-a[i]]!=0) if(table[j]==0 || table[j]>table[j-a[i]]+1) table[j] =table[j-a[i]]+1;
						}
					}
				}
					for (int i =k; i <=sum; i += 1)
						if(table[i]!=0)
						ans1 = min(ans1,table[i]);
				v.clear();
				if(ans1==INT_MAX) return -1;
				else return (ans+ans1);
			}
	}
}

int main()
{
	file;
	fastio;
	int t;cin>>t;while(t--)
    cout<<solve()<<endl;
}
