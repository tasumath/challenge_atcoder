#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    string s; cin>>s;
    string t; cin>>t;
    int n = s.size();
    int m = t.size();
    
    int base;
    if(n<m) base = m;
    else base = n;

    for(int i=0;i<base;i++){
        int f = s[i] - 'a';
        int g = t[i] - 'a';
        if(f==g) continue;
        if(f<g){
            cout<<"Yes"<<endl;
            return 0;
        }
        if(f>g){
            cout<<"No"<<endl;
            return 0;
        }
    }

}
