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
    long long int a,b,x;
    cin>>a>>b>>x;
    long long int cnt = 0;
    for(long long int i=a;i<=b;i++){
        if(i%x==0) cnt++;
        //cout<<cnt<<endl;
    }
    cout<<cnt<<endl;
}