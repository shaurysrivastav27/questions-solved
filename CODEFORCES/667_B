#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        long long n1=0,n2=0;
        if(a>=x)
        {
            if(a-x>=n)
            n1=n;
            else
            {
                n1 = a-x;
            }
        }
        if(b>=y)
        {
            if(b-y>=n)
            n2=n;
            else
            {
                n2 = b-y;
            }
        }
        vector<long long> temp ;
            if(n-n1<=n2)
            temp.push_back((a-n1)*(b-(n-n1)));
            else
            {
                temp.push_back((a-n1)*(b-n2));
            }
            if(n-n2<=n1)
            temp.push_back((b-n2)*(a-(n-n2)));
            else
            {
                temp.push_back((b-n2)*(a-n1));
            }
        //vector<long long> temp ;
        temp.push_back(a*b);
        temp.push_back(a*(b-n2));
        temp.push_back((a-n1)*b);
        if(n1+n2<=n)
        {
            temp.push_back((a-n1)*(b-n2));
        }
       
        long long m = temp[0];
        for(long long i=0;i<temp.size();i++)
        {
            if(temp[i]<m)
            m=temp[i];
        }
        cout<<m<<endl;
    }
    return 0;
}
/*7
10 10 8 5 3
12 8 8 7 2
12343 43 4543 39 123212
1000000000 1000000000 1 1 1
1000000000 1000000000 1 1 1000000000
10 11 2 1 5
10 11 9 1 10
*/
/*70
77
177177
999999999000000000
999999999
55
10*/
