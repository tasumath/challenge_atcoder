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

//func(n)は0以上n以下の整数のうち,条件を満たすものの個数.

long long int a,b,x;
long long int func_a(long long int n){
    long long int y = 0;
    if(n==0) return y;
    return (n-1)/x + 1;
}
long long int func_b(long long int m){
    long long int y = 0;
    //b=0のときは,xを0で割った際の個数もカウントするため,func中のretrunを適用する.
    //if(m==0) return y;
    return m/x + 1;
}

int main(){
    cin>>a>>b>>x;
    long long int f_a = func_a(a);
    long long int f_b = func_b(b);
    cout<<f_b - f_a<<endl;
}