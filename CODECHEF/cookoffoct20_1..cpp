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
	int n;cin>>n;
	string s;
	cin>>s;
	int a[26];
	for(int i=0;i<26;i++)
	a[i] = 0;
	for(int i=0;i<n;i++)
	{
		int j = int(s[i]) - 97;
		a[j] +=1;
	}
	int k = int(s[n-1]) -97;
//	cout<<int(s[n-1])-97<<endl;
	if(a[k]>1) cout<<"YES";
	else cout<<"NO";
	line;
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
