#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("eat.in", "r", stdin);
    int testCases; cin >> testCases;
    long int a,b;
    for (int i = 0; i < testCases; i++)
    {
        cin>>a>>b;
        if (a+b>a*b){
            cout<<"Plate 1\n";
        }
        else {
            cout<<"Plate 2\n";
        }
    }
    
}