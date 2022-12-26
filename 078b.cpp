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
    int x,y,z; cin>>x>>y>>z;
    x = x - z;
    cout<<x/(y+z)<<endl;
}