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
//#pragma GCC optimize("Ofast")  
//#pragma GCC target("avx,avx2,fma") 
ll n,m,s1,s2,c=0;
void inline solve() 
{
	cin>>n>>m;
	s1=s2=0;
	vec a(n),b(m);	
	for (ll &i:a)
	{	
		cin>>i;
		s1+=i;
	}
	for (ll &i:b)
	{
		cin>>i;
		s2+=i;
	}	
	c= 0;
	if(s1>s2) cout<<c;
	else
	{
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		int mn = min(n,m);
		int i =0,j=b.size()-1;
		while(mn--)
		{
			s1-=a[i]-b[j];
			s2-=b[j]-a[i];
			i++;j--;
			c++;
			if(s1>s2) break;
		}
		
		if(s1<=s2) cout<<-1;
		else
		cout<<c;
	}
	line;
	
}
/*
2
2 3
2 2
5 5 5
4 3
1 3 2 4
6 7 8
*/
int main()
{
	//file;
	fastio;
	//auto init = high_resolution_clock::now(); 
	int t;cin>>t;while(t--)
    solve();
    //auto stop = high_resolution_clock::now(); 
	//auto duration = duration_cast<microseconds>(stop-init); 
	//cout <<"time: "<<duration.count() << endl; 
    return 0;
}
