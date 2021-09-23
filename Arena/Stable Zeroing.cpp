#include <iostream>
using namespace std;

int main(){
	int n,a,j,i=0;
	cin>>n;
	int T[n];
	for (j=0; j<n; j++) {
		cin>>a;
		if (a==0){
			T[n-i]=0;
		}
		else {
			T[i]=a;
			i++;
		}
	}
	for (j=0; j<n; j++) {
		cout<<T[j]<<"  ";
	}
	return 0 ;}