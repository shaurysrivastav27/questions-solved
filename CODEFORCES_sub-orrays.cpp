#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<1<<" ";
        }
        else if(n==2)
        {
            cout<<2<<" "<<1;
        }
        else
        {        
        cout<<n<<" ";
        for(int i=(n-1)/2;i<n;i++)
        {
            cout<<i<<" ";
        }
        for (int i = 1; i < (n-1)/2; i++)
        {
            cout<<i<<" ";
        }
        }
        cout<<endl;
        
    }
}
