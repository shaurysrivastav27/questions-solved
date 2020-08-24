#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
	long int n,d;
	cin>>n>>d;
	vector<long int> a;
    vector<long int> b;
	for(long int i=0;i<n;i++)
	{
		long int s;
		cin>>s;
		a.push_back(s);
		b.push_back(0);
	}
	long k=d%n;
    long int q=0;
	for(long int i=0;i<n;i++)
	{
		if(i+k<n)
		{
			b[i+k]=a[i];
		}
		else
		{
            
			b[q]=a[i];
            q++;
		}
	}
	for(long int i=0;i<n;i++)	
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;

}
return 0;
}
