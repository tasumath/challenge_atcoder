#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    cin>>n>>a;
    int g = n/500;
    int zangaku = n - g*500;
    if(zangaku<=a) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}