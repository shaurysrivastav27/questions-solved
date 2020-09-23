#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n;
        string s;
        cin>>s;
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            b.push_back(int(s[i])-int('0'));
        }
        int e1=0,e2=0,o1=0,o2=0,ans=-1;
        if(n%2==0)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2!=0)
                {
                    if(b[i]%2==0)
                    e2=1;
                    else o2=1;
                }
            }
            if(e2==1)
            ans=2;
            else
            {
                ans=1;
            }
            
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    if(b[i]%2==0)
                    e1=1;
                    else o1=1;
                }
            }
            if(o1==1)
            ans=1;
            else
            ans=2;
        }        
        cout<<ans<<endl;
    }
    return 0;
}
