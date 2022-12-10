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
    int a,b;
    char op;
    cin>>a>>op>>b;
    if(op=='+') cout<<a+b<<endl;
    else cout<<a-b<<endl;
}