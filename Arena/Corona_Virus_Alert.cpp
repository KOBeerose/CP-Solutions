#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;

int main()
{   
	ios::sync_with_stdio(0);
    cin.tie(0);
    string popu;
    cin>>popu;
    if (popu.find('c')==string::npos) cout<<"Safe";
    else cout<<"Stay Home";
    return 0;
}