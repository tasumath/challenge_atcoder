#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    int x,a,b; cin>>x>>a>>b;
    if(abs(x-a) < abs(x-b)) cout<<"A"<<endl;
    else cout<<"B"<<endl;
}


