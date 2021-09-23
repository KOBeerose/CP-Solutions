#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char
 
using namespace std;

 
typedef long long ll;
typedef long double ld;


int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	string popu ;
	int n; cin>>n;
    for (int i=0; i<n; i++){
    	int infected = 0, num_c = 0;
    	cin>>popu;
    	for (int i = 0; i < sz(popu); i++){
		    if ( popu[i]=='c' ){
                infected = max(infected,i);
                popu = popu.substr(i+1,sz(popu)+1);
                num_c+=1;
                i=-1;
			}
		}
		cout<<infected<<" "+string(num_c, 'c')+popu<<endl;
	}
	
    return 0;

}


