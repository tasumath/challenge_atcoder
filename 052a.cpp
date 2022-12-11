#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int a,b,c,d; cin>>a>>b>>c>>d;
    if(a*b>c*d) cout<<a*b<<endl;
    else if(a*b<c*d) cout<<c*d<<endl;
    else cout<<a*b<<endl;
}