#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vec vector<ll> 
#define vec1 vector<vector <ll>>
#define set set<ll> 
#define pair pair<ll>
#define map map<ll> 
ll msb(ll n)
{
int k = 0,i=0;
ll m = 1000000000;
if(n==0)
return 0;
else
{	
	int  j =0;
	string bin = std::bitset<32>(n).to_string();
	while(k!=1)
	{
		k = int(bin[j])-int('0');
		i++;
		j++;
	}
	//cout<<bin<<endl;
	return 32 - i;
}
}
void solve(vec a,ll n)
{
	vec1 b;
	for(int i=0;i<=32;i++)
	{
		vec te;
		te.push_back(0);
		b.push_back(te);
	}
	for(int i=0;i<n;i++)
	{
		int t = msb(a[i]);
		//cout<<t<<" ";
		b[t].push_back(i);
	}	
	ll sum = 0;
	for(int i = 0 ;i<=32;i++)
	{
		ll s = b[i].size()-1;
		sum = sum + (s*(s-1))/2;
	}
	cout<<sum<<endl;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
 int n;
 cin>>n;
 vec a;
 for(int i=0;i<n;i++)
 {
 	ll s;
 	cin>>s;
 	a.push_back(s);
 }
 solve(a,n);
 }
 return 0;
 }
