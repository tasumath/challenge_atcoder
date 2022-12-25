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
    string s; cin>>s;
    int cnt[200];
    for(int i=0;i<200;i++) cnt[i]=0;
    for(int i=0;i<3;i++){
        int x = s[i] - 'a';
        cnt[x]++;
    }
    for(int i=0;i<3;i++){
        int x = s[i] - 'a';
        if(cnt[x]==1){
            cout<<s[i]<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}