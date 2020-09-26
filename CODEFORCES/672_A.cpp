#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll int> 
void solve(int n,vec a,set<ll> c)
{
    vec b = a;
    if(is_sorted(a.begin(),a.end())==true)
    cout<<"YES"<<endl;
    else if(c.size()<a.size())
    cout<<"YES"<<endl;
    else
    {
        sort(b.begin(),b.end(),greater<int> ());
        if(a==b)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vec a;
        set<ll> se;
        for(int i=0;i<n;i++)
        {
            ll s;
            cin>>s;
            a.push_back(s);
            se.insert(s);
        }
        solve(n,a,se);
    }   
}
