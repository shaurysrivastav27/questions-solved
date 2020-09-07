#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("/home/shaury/Desktop/HACKER/5-output.txt","r",stdin);
    freopen("/home/shaury/Desktop/HACKER/aout.txt","w",stdout);
	*/int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> a;
		for(int i=0;i<n;i++)
		{
			int s;
			cin>>s;
			a.push_back(s);
		}
		int f[n][n];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				f[i][j]=0;
			}
		}
		for(int i=0;i<n;i++)
		{
			f[i][i]=1;
			for(int j=0;j<n;j++)
			{
				int temp = a[i]-a[j];
				int te = j-i;
				if((temp*te)>0)
				{
					f[i][j]=1;
					for(int k=i;k<n;k++)
					{
						if(f[j][k]==1)
						{
							f[i][k]=1;
						}
					}
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			int d = a[i]*10 +i;
			for(int j=0;j<n;j++)
			{
				if(f[i][j]==1)
				{
					if(a[j]*10+j<d)
					d = a[j]*10 + j;
				}
			}
			for(int j=0;j<n;j++)
			{
				if(a[j]*10 +j >=d && j<i)
				f[i][j]=1;
			}
		}
		int mx=INT_MIN,mi=INT_MAX;
		vector<int> fin;
		for(int i=0;i<n;i++)
		{
			//cout<<a[i]<<" ";
			int l=0;
			for(int j=0;j<n;j++)
			{
				//cout<<f[i][j]<<" ";
				l = l+f[i][j];
			}
			//cout<<endl;
			if(mi>l)
			mi=l;
			if(mx<l)
			mx=l;
		}
		cout<<mi<<" "<<mx<<endl;
	}
return 0;
}
