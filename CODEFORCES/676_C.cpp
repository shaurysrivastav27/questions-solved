#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define ull usigned long long 
#define vecu vector<ull> 
#define vec vector<ll>
#define vec1 vector<vector ll>>
#define arr array<ll,1000000> 
#define str string
#define set set<ll>
#define mset multiset<ll>
#define pair pair<ll,ll>
#define pb push_back
#define show(a) for(ll i : a) cout<<i<<" ";
#define show2(a,n,n1) for(ll i =0;i<n;i++){ for(ll j=0;j<n1;j++) cout<<a[i][j]<<" ";cout<<endl;}
#define line cout<<endl

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    cout<<3<<endl;
    cout<<"L "<<n-1<<endl;
    cout<<"R "<<n-1<<endl;
    cout<<"R "<<(2*n-1)<<endl;
    return 0;
}
