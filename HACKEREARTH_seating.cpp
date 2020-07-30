//dynamic array declaration using pointers
#include<bits/stdc++.h>
using namespace std;
class dia{
  private:
    int **a;
    int m=6,n=18;
  public:
    void del();
    void create();
    void search(int q);
    void get();
};
void dia::create()
{
  a=new int*[m];
  for(int i=0;i<m;i++)
  {
    a[i]=new int[n];
  }
}
void dia::search(int q)
{
  for(int j=0;j<m;j++)
  {
  for (int i = 0; i < n; i++)
  {
       if(a[j][i]==q)
       {
           if(i==0 | i%2==0)
           {
               cout<<a[j][i+1]<<" ";
               if(j==0 | j==5)
	       {
                   cout<<"WS"<<endl;
               }
               else if(j==1 |j==4)
	       {
                   cout<<"MS"<<endl;
               }
               else
	       {
                   cout<<"AS"<<endl;
               }
           }
           else if(i==1 | i%2!=0)
	   {
               cout<<a[j][i-1]<<" ";
               if(j==0 | j==5)
	       {
                   cout<<"WS"<<endl;
               }
               else if(j==1 |j==4)
	       {
                   cout<<"MS"<<endl;
               }
               else
	       {
                   cout<<"AS"<<endl;
               }
           }
       } 
    }
  }
}
void dia:: get()
{
  create();
  int c=0;
   for(int j=0;j<n;j++)
   {
  for(int i=0;i<m;i++)
  {
      c++;
      if(j==0 | j%2==0)
      {
        a[m-i-1][j]=c;
      }
      else if(j==1 | j%2!=0)
      {
        a[i][j]=c;
      }
  }
  }
}
void dia::del()
{
  delete []a;
}
int main() {
   class dia d;
   d.get();
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
   d.search(q);
   }
   d.del();
	return 0;
}
