#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
#include<set>
#include<queue>
using namespace std;

int main(){
    int a,b; cin>>a>>b;
    if(a%3==0 || b%3==0 || (a+b)%3==0) cout<<"Possible"<<endl;
    else cout<<"Impossible"<<endl;
}