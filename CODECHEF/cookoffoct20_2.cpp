#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long n,t,m;
	cin>>t;
	while(t--){
	cin>>n>>m;
	long long a = 2*n -1;
	if(a>=m) cout<<m<<endl;
	else cout<<-1<<endl;
	}
	return 0;
}
