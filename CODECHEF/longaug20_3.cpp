#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,p;
        cin>>h>>p;
        int i=-1;
        while(i!=0)
        {
            h=h-p;
            p=p/2;
            if(p==1 && h>1)
            {
                i=0;
                break;
            }
            if(h<=0)
            {
                i=1;
                break;
            }
        }
        if(i==1)
        {
            cout<<i<<endl;
        }
        if(i==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
