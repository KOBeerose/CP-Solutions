#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,a,b,i,j,s=0;
	cin>>n;
	for (i=0; i<n; i++) {
		s=0;
		cin>>a>>b;
		float T[a];
		for (j=0; j<a; j++) {
			cin>>T[j];
			s+=ceil(T[j]/b);
		}
		cout<<s<<endl;
	}
	return 0 ;}