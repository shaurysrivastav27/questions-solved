#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
        long long x1,x2,x3;
        long long x4,x5,x6;
        cin>>x1>>x2>>x3;
        cin>>x4>>x5>>x6;
        long long sum =0;   
        if(x5>=x3)
        {
            sum = sum +x3*2;
            x5 = x5-x3;
            x3 =0;
        }
        else if(x5<x3)
        {
            sum = sum +x5*2;
            x3=x3-x5;
            x5=0;
        }
        x6 = x6-x1;
        x6 = x6-x3;
        if(x6<0)
            sum =sum+0;
        else
        {        
            sum = sum - (x6*2);
        }
        cout<<sum<<endl;
    }
    return 0;
}
