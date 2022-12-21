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
    int n; cin>>n;
    int point = 0;
    for(int i=0;i<=6;i++){
        int k = (1<<i);
        int l = (1<<i+1);
        if(k<=n && n<=l) point = i;
    }
    cout<<(1<<point)<<endl;
}