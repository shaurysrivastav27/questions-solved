#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
       vector<int> h;
       for(int i=0;i<10;i++)
       {
           h.push_back(0);
       }
       int n;
       cin>>n;
       vector<int> a;
       for(int i=0;i<n;i++)
       {
           int s;
           cin>>s;
           a.push_back(s);
       }
       for(int i=0;i<n;i++)
       {
           h[a[i]-1]+=1;
       }
       vector<int> b;
       for(int i=0;i<10000;i++)
       {
           b.push_back(0);
       }
       sort(h.begin(),h.end());
       for(int i=0;i<10;i++)
       {
           if(h[i]!=0)
            b[h[i]-1]+=1;
       }
    int m = b[0],k=1;
    for(int i=0;i<b.size();i++)
    {
        if(m<b[i])
        {
            m=b[i];
            k=i+1;
        }
    }
    cout<<k<<endl;
    }
    return 0;
}
