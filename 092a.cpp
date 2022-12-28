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
    int a,b,c,d; cin>>a>>b>>c>>d;
    int sum = 0;
    if(a<b) sum = sum + a;
    else sum = sum + b;
    if(c<d) sum = sum + c;
    else sum = sum + d;

    cout<<sum<<endl; 
    
}