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

map<char,int> Map;

int main(){

    int cnt=0; //種類
    for(int i=1;i<=3;i++){
        char s; cin>>s;
        if(Map[s]==0){
        Map[s]=Map[s]+1;
        cnt++;
        }
    }
    if(cnt==1) cout<<1<<endl;
    if(cnt==2) cout<<3<<endl;
    if(cnt==3) cout<<6<<endl;

}