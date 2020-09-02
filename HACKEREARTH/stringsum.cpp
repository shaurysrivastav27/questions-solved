#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[1000];
	cin>>a;
	int l = 0;
	for(int i=0;i<strlen(a);i++)
	l = l+ int(a[i])-97+1;
	cout<<l;
	return 0;
}
