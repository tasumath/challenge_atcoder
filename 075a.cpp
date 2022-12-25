#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    int a,b,c; cin>>a>>b>>c;
    if(a==b){
        cout<<c<<endl;
        return 0;
    }
    if(a==c) cout<<b<<endl;
    else cout<<a<<endl;
}


