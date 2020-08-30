#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int> a;
       //vector<int> temp;
       int k=-1;
       for(int i=0;i<n;i++)
       {
           int s;
           cin>>s;
           a.push_back(s);
           if(s==0)
           k=i;
       }
       if(k==-1)
       {
           cout<<"No";
       }
       else
       {
            vector<int> temp;
            int t,l=0,j=0;
            while(j!=n)
            {
                if(a[j]==0)
                {
                    t=j;
                    l++;
                }
                else
                {
                    if(j==t+1)
                    {
                        temp.push_back(l);
                        //cout<<l<<" ";
                        l=0;
                    }
                }
                j++;
            }
            //cout<<endl;
            temp.push_back(l);
            int fl=0;
            sort(temp.begin(),temp.end());
            if(temp[temp.size()-1]/2<temp[temp.size()-2] || temp[temp.size()-1]<temp[temp.size()-2])
            {
                fl=0;
            }
            else
            {
            int mx=temp[0];
            if(mx%2!=0)
                fl=1;
            for(int i=0;i<temp.size();i++)
            {
                    if(temp[i]>mx)
                    {
                        mx=temp[i];
                        if(mx%2!=0)
                        {
                            fl=1;
                        }
                        else
                        {
                            fl=0;
                        }
                    }
            }
            }
            if(fl==1)
            {
                cout<<"Yes";
            }
            else
            {
                 cout<<"No";
            }
       }
       cout<<endl;
    }
    return 0;
}
