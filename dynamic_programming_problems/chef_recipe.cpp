/*
https://www.codechef.com/submit/JAIN
*/

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

void solve1() //tle at last case
{
	int n;
	cin>>n;
	int a[n][5];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<5;j++)
		{
			a[i][j]=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		int sq=0;
		for(int j=0;j<s.size();j++)
		{
			if(s[j] == 'a')      a[i][0] = 1;
			else if(s[j] == 'e') a[i][1] = 1;
			else if(s[j] == 'i') a[i][2] = 1;
			else if(s[j] == 'o') a[i][3] = 1;
			else if(s[j] == 'u') a[i][4] = 1;
			else if(a[i][0]*a[i][1]*a[i][2]*a[i][3]*a[i][4]) break;
		}
	}
	show2(a,n,5);
	int c =0 ;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int count = 0;
			for(int k=0;k<5;k++)
			{
				int ans = a[i][k]+a[j][k];
				if(ans>0) count++;
			}
			if(count==5) c++;
		}
	}
	cout<<c<<endl;
}

void solve ()   //correct answer 
{
	int n;
	cin>>n;
	bool a[n][5];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<5;j++)
		{
			a[i][j]=false;
		}
	}
	ll table[32];
	for(int i=0;i<=31;i++)
	table[i]=0;
	for(ll i=0;i<n;i++)
	{
		string s;
		cin>>s;
		for(int j=0;j<s.size();j++)
		{
			bool flag =a[i][0]&a[i][1]&a[i][2]&a[i][3]&a[i][4]; 
			if(flag) break;
			if(s[j] == 'a')      a[i][0] = true;
			else if(s[j] == 'e') a[i][1] = true;
			else if(s[j] == 'i') a[i][2] = true;
			else if(s[j] == 'o') a[i][3] = true;
			else if(s[j] == 'u') a[i][4] = true;
		}
		int temp = 16*a[i][4] + 8*a[i][3] + 4*a[i][2] + 2*a[i][1] + a[i][0];
		table[temp]+=1;	
	}
	ll count = 0;
	for(int i=1;i<=31;i++)
	{	
		if(table[i]>0)
		{
			for(int j=i;j<=31;j++)
			{
				int ans = i|j;
				if(ans ==31)
				{
					if(i==j)
					count = count + ((table[j]*(table[j]-1))/2);
					else
					count = count + (table[j]*table[i]);  
				}
			}
		}
	}
	cout<<count<<endl;
}
/*
3
3
aaooaoaooa
uiieieiieieuuu
aeioooeeiiaiei
1
3
ao   01001
uie	 10110
aeio 01111
*/
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //ini();
    int t;
    cin>>t;
    while(t--)
	{
		solve();
	}
    return 0;
}
