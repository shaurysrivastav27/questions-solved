#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
        long long k,l;
        cin>>k>>l;
        if(l==0)
        {
            if(k%2==0)
            {
                cout<<0;
            }
            else
            {
                cout<<1;
            } 
        }
        else if(k<l)
        {
            cout<<abs(l-k);
        }
        else if(k>l)
        {
            if(k%2==0 && l%2==0)
            cout<<0;
            else if(k%2!=0 && l%2!=0)
            cout<<0;
            else
            {
                cout<<1;
            }
            
        }
        else if(k==l)
        {
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
