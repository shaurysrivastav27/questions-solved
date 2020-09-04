#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long p,f,ans=0;
        cin>>p>>f;
        if(p>f)
        {
            ans = (p-f)/10;
            if((p-f)%10!=0)
            ans=ans+1;
        }
        else if(p<f)
        {
            ans = (f-p)/10;
            if((f-p)%10!=0)
            ans=ans+1;
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}
