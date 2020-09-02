#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("/home/shaury/Desktop/HACKER/5136908cddd711ea.txt.clean.txt","r",stdin);
    freopen("/home/shaury/Desktop/HACKER/aout.txt","w",stdout);*/
	int t;
	cin>>t;
	while(t--)
	{
        int h[26];
        for(int i=0;i<26;i++)
        h[i]=0;
	string a;
	cin>>a;
	vector<int> f;
	int l=0;	
	for(int i=0;i<a.size();i++)
	{
		if(i!=0 && a[i]!=a[i-1])
		l++;	
		//f.push_back(int(a[i]));
        h[int(a[i])-97]+=1;
    }
	if(l==0)
	{
		cout<<-1;
	}
	else
	{
		//sort(f.begin(),f.end());
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<h[i];j++)
            cout<<char(97+i);
        }
		
	}
	cout<<endl;
	}
return 0;
}
