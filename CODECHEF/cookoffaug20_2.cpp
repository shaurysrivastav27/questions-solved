#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<vector<long long >> a;
    for(long long int i=0;i<n;i++)
    {
        vector<long long > temp;
        long long x,y;
        cin>>x>>y;
        temp.push_back(x);
        temp.push_back(y);
        a.push_back(temp);
    }
    long long sum=0;
    sum = n;
    while(n>5)
    {
        sum =sum+n/2;
        n/=2;
    }
    cout<<sum<<endl;
    }
    return 0;
}
