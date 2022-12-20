#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,g,b; cin>>r>>g>>b;
    int ans = g * 10 + b;
    if((ans)%4==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}