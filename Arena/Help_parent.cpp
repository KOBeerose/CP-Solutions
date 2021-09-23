#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,p,i;
	string c;
	cin>>n;
	for (i=1; i<n+1; i++) {
		cin>>p>>c;
		c.erase(c.begin() + p-1);
		p=int(i);
		cout<<p<<" "<<c<<endl;	
	}	
}