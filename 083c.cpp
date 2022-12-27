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
    long long int x,y; cin>>x>>y;
    long long int sum = x;
    long long int cnt = 0;
    while(sum<=y){
        sum = sum *2LL;
        cnt = cnt + 1;
    }
    cout<<cnt<<endl;
}