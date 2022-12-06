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
    int x = s.size();
    if(x==4){
        cout<<s<<endl;
        return 0;
    }
    else{
        for(int i=4;i>x;i--){
            cout<<0;
        }
    }
    cout<<s<<endl;
}