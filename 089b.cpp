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
    int cnt[1001];

    for(int i=0;i<=1000;i++) cnt[i] = 0;

    for(int i=0;i<n;i++){
        char x; cin>>x;
        if(x == 'P' || x == 'W' || x == 'G' || x == 'Y'){
        //cout<<x<<endl;
        int z = x - '0';
        cnt[z] = cnt[z] + 1;
        }
    }

    int sum = 0;
    for(int i=0;i<=1000;i++){
        if(cnt[i] > 0) sum = sum + 1;
    }

    if(sum==3) cout<<"Three"<<endl;
    if(sum==4) cout<<"Four"<<endl;
}



