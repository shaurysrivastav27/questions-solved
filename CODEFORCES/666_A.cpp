
 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> h;
		for(int i=0;i<26;i++)
		{
			h.push_back(0);
		}
		for(int i=0;i<n;i++)
		{
			char a[1000];
			cin>>a;
			for(int i=0;i<strlen(a);i++)
			{
				h[int(a[i])-97]+=1;
			}
		}
		int fl=0;
		for(int i=0;i<26;i++)
		{
			if(h[i]%n!=0)
			{
				fl=1;
				break;
			}
		}
		if(fl==1)
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES";
		}
		cout<<endl;
	}
	return 0;
}
