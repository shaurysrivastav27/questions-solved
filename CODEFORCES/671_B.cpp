#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll x(ll n)
{
    return (n*(n+1))/2;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll j=1,c=0,k=1;
        while(1)
        {
            if(n-x(j)>=0)
            {
                n -= x(j);
                k=k*2;    
                j=j+k;
                c++;
                //cout<<n<<" "<<j<<endl;
            }
            else
            {
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
/*
4
1
8
6
1000000000000000000

*/
