#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    freopen("wave.in", "r", stdin);
    cin >>T;
    vector<string> waves,wave {};
    while(T--){
        waves= {};
        string  max, s; cin>>s;
        int j = 0;
        for (int i = 0; i < s.size()+1 ; i++){
            if (s[i]==s[i+1]){
                waves.push_back(s.substr(j,i-j+1));
                j=i+1;
            }
        }
        for (int k = 0; k < waves.size(); k++){
            if (waves[k].size()<waves[k+1].size()){
                max.replace(0, max.size(), waves[k+1]);
            }  
        }
        cout<<max<<endl;  
    }
}