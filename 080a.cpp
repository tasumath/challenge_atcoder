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
    int n,a,b; cin>>n>>a>>b;
    if(n*a < b) cout<<n*a<<endl;
    else cout<<b<<endl;
}