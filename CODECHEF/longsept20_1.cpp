#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("/home/shaury/Desktop/HACKER/output-46863465-17808813332468148574.txt","r",stdin);
    freopen("/home/shaury/Desktop/HACKER/aout.txt","w",stdout);
	*/int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<long long> a;
		for(int i=0;i<n;i++)
		{
			long long s;
			cin>>s;
			a.push_back(s);
		}
		sort(a.begin(),a.end());
		vector<long long int>::iterator it; 
		it = std::unique(a.begin(),a.end());
		a.resize(std::distance(a.begin(),it));
		long k;
		if(a[0]==0)
			k = a.size()-1;
		else
			k = a.size();
		cout<<k<<endl;
	}
return 0;
}
