#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        unsigned long long int k;
        long long int f=1000000000;
        long long int a=-1;
        long long int s;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            if(k>s)
            {
                if(k%s==0)
                {
                    if(f>(k/s))
                    {
                        f=(k/s);
                        a=s;
                    }
                }
            }
        }

        cout<<a<<endl;
        
    }
    return 0;
}
