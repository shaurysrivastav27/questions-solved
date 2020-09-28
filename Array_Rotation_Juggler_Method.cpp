#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
void rotate(int a[],int d,int n)
{
	d=d%n;
	int g_c_d=gcd(d,n);
	for(int i= 0;i<g_c_d;i++)
	{
		int temp=a[i];
		int j=i;
		while(1)
		{
			int k=(j+d);
			if(k>=n)
				k=k-n;
			if(k==i)
				break;
			a[j]=a[k];
			j=k;
		}
		a[j]=temp;

	}
}
int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int d;cin>>d;
	rotate(a,d,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}