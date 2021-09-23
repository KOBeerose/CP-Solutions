#include <iostream>
using namespace std;

int main(){
	int n,p,i;
	cin>>n;
	for (i=0; i<n; i++) {
		cin>>p;
		if (p==0){
			cout<<1<<endl;
		}
		else if (p==1 or p==2 or p==4){
			cout<<p<<endl;
		}
		else if (p==3){
			cout<<6<<endl;
		}
		else {
			cout<<0<<endl;
		}

	}
	return 0 ;}