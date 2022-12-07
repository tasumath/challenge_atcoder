#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;
//floatでは足りなかった.
int main(){
    int n;
    long double d; 
    cin>>n>>d;
    int cnt=0;
    for(int i=0;i<n;i++){
        long double x; cin>>x;
        long double y; cin>>y;
        long double ans = sqrt(x*x+y*y);
        if(ans<=d) cnt++;
    }
    cout<<cnt<<endl;
}