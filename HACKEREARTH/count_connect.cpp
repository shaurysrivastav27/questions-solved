/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vec vector<ll>
#define vec1  vector<vector<ll>>

ll n,e,n1,n2;
vec1 gr;vec v;
bool k[1000005];
void dfs(ll key)
{
	k[key] = true;
	for(int i=0;i<gr[key].size();i++)
	{
		if(k[gr[key][i]]==false)
		dfs(gr[key][i]);
	}
}
int main()
{
	cin>>n>>e;
	memset(k,0,n+1);
	for(int i=0;i<=n;i++)
	{
		v.pb(i);
		gr.pb(v);
		v.clear();
	}
	for(int i=0;i<e;i++)
	{
		cin>>n1>>n2;
		gr[n1].pb(n2);
		gr[n2].pb(n1);
	}
	int cnt= 0;
	for(int i=1;i<=n;i++)
	{
		if(k[i]==false)
		{
			dfs((long long)i);
			cnt++;
		}
	}
	cout<<cnt<<endl;
}

