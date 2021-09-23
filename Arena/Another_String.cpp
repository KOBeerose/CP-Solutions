#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,i;
	char a;
	string c;
	cin>>n;
	for (i=0; i<n; i++) {
		cin>>c;
		a=c[0];
		c[0]=c[1];
		c[1]=a;
		cout<<c<<endl;
	}
	return 0 ;}