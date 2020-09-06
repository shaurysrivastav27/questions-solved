#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("/home/shaury/Desktop/HACKER/output-46863465-17808813332468148574.txt","r",stdin);
    freopen("/home/shaury/Desktop/HACKER/aout.txt","w",stdout);
	*/
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<vector<int>> a ;
		for(int i=0;i<n;i++)
		{
			vector<int> temp;
			for(int j=0;j<n;j++)
			{
				int s;
				cin>>s;
				temp.push_back(s);
			}
			a.push_back(temp);
		}
		vector<int> ar;
		//ar = new int[n];
		for(int i=1;i<n;i++)
		{
			if(a[0][i]!=i+1)
			ar.push_back(0);
			else
			{
				ar.push_back(1);
			}
			
		}
		int N = ar.size()-1;
		int temp = 1,l=0;
		for(int i=N;i>=0;i--)
		{
			if(ar[i]==0 && l==0)
			{
				temp = ar[i];
				l++;
			}
			else if(ar[i]!=temp)
			{
				temp = ar[i];
				l++;
			}
		}
		cout<<l<<endl;
	}
return 0;
}
