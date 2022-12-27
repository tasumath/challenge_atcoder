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
    int x; cin>>x;
    int a; cin>>a;
    int b; cin>>b;
    x = x - a;
    int kosu = x/b;
    x = x - kosu*b;
    cout<<x<<endl; 
}