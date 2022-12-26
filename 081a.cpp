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
    int cnt = 0;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]=='1') cnt++;
    }
    cout<<cnt<<endl;
}


