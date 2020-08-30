#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b;
        cin>>a>>b;
        if(a<9 && b<9)
        {
            cout<<1<<" "<<1<<endl;
        }
        else if(a<9)
        {
            cout<<0<<" "<<1<<endl;
        }
        else if(b<9)
        {
            cout<<1<<" "<<1<<endl;
        }
        else
        {
            int i=9,j=9;
            long int l1=0,l2=0;
            if(a%9==0)
            {
                l1=a/9;
            }
            if(a%9!=0)
            {
                l1=(a-(a%9))/9+1;
            }
            
            if(b%9==0)
            {
                l2=b/9;
            }
            if(b%9!=0)
            {
                l2=(b-(b%9))/9+1;
            }
        if(l1>=l2)
        {
            cout<<1<<" "<<l2<<endl;
        }
        else
        {
            cout<<0<<" "<<l1<<endl;
        }
        
        }
    }
    return 0;
}
