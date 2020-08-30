#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long > a;
    for(long long int i=0;i<n;i++)
    {
        long long s;
        cin>>s;
        a.push_back(s);
    }
    long long l=1;
    long long sum=0;
    for(long long i=0;i<n;i++)
    {
        if(a[i]>k)
        {
            l=-1;
            break;
        }
        if(a[i]+sum>k)
        {
            sum=a[i];
            l++;
        }
        else
        {
            sum = sum+a[i];
        }   
    }
    cout<<l;
    cout<<endl;
    }
    return 0;
}
