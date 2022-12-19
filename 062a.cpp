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
    int ans[13] = {0,1,3,1,2,1,2,1,1,2,1,2,1};
    int x,y; cin>>x>>y;
    if(ans[x] == ans[y]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}