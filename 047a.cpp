#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c; cin>>a>>b>>c;
    int f = a + b;
    int g = b + c;
    int h = a + c;
    if(f==c || g==a || h==b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}