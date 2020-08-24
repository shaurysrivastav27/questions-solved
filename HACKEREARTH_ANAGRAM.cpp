#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--){
    int hm[26]={0},hj[26]={0};
    char a[10000],b[10000];
    cin>>a;
    cin>>b;
    for(int i=0;i<strlen(a);i++){
        hm[int(a[i])-97]+=1;
    }
    for(int i=0;i<strlen(b);i++){
        hj[int(b[i])-97]+=1;
    }
    int si=0;
    for(int i=0;i<26;i++){
        si=si+abs(hm[i]-hj[i]);
    }
    cout<<si<<endl;
    }
    return 0;
}
