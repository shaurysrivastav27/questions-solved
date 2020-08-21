#include<bits/stdc++.h>
using namespace std;
long long  pis(long long m)
{
    long long k;
    long long p =0,c=1,x=p+c;
    for(long long i =0;i<(m*m);i++)
    {
        x = (p+c)%m;
        p = c;
        c = x;
        if(p == 0 && c ==1)
        {
            k = i+1;
        }
    }
    return k;
}
long long fib(long long m,long long n)
{
    long long mod = pis(m);
    long long p=0,c=1,a;
    n = n%mod;
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    for(long long i=n-1;i>0;i--)
    {
        a= (p+c)%m;
        p=c;
        c=a;
    }
    return a%m;
}
int main()
{
    long long int n,m;
    cin>>n>>m;
    cout<<fib(m,n);
return 0;
}
//2816213588 239
