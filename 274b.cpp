#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

char a[1100][1100];
int cnt[1100];

int main(){
    int H,W; cin>>H>>W;

    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            cin>>a[i][j];
        }
    }
       for(int i=1;i<=W;i++){
        for(int j=1;j<=H;j++){
            if(a[j][i]=='#'){
                cnt[i]=cnt[i]+1;
            }
        }
    }

    for(int i=1;i<=W;i++) cout<<cnt[i]<<" ";


}