#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,a,b; cin>>x>>a>>b;
    int day = -a + b;
    if(0 < day && day <= x) cout<<"safe"<<endl;
    if(x < day) cout<<"dangerous"<<endl;
    if(day <= 0) cout<<"delicious"<<endl;
}