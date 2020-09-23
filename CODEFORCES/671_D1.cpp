#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll int> 
void solve(ll n,vec a)
{
    vec b;
    ll c= 0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        b.push_back(0);
        else
        {
            b.push_back(1);
            c++;
        }
    }
    int k=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(b[i]==1)
        {
            b[i]=a[k];
            k++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]==0)
        {
            b[i]=a[k];
            k++;
        }
    }
    if(n%2==0) c = c-1;
    cout<<c<<endl;
    for(ll x:b)
    cout<<x<<" ";
}
int main()
{
    ll n;
    cin>>n;
    vec a;
    for (int i = 0; i < n; i++)
    {
        ll s;
        cin>>s;
        a.push_back(s);    
    }    
    solve(n,a);
    return 0;
}
