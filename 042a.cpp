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
    
    int cnt[10];
    for(int i=0;i<=9;i++) cnt[i]=0;
    
    for(int i=0;i<=2;i++){
        int a; cin>>a;
        cnt[a] = cnt[a] + 1;
    }

    if(cnt[5]==2 && cnt[7]==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}