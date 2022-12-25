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

char s[51][51];
int cnt[51][51];

int main(){
    int h,w; cin>>h>>w;
    
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>s[i][j];
        }
    }
    
    for(int i=0;i<=h;i++){
        for(int j=0;j<=w;j++){
            cnt[i][j] = 0;
        }
    }

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(s[i][j] == '#'){
                for(int k=i-1;k<=i+1;k++){
                    for(int l=j-1;l<=j+1;l++){
                        if(k==i && l==j) continue;
                        //if(s[k][l]=='.')がないとWAになった
                        //原因は分からない.
                        if(s[k][l]=='.') cnt[k][l] = cnt[k][l] + 1;
                    }
                }
            }
        }
    }

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(s[i][j]=='.') cout<<cnt[i][j];
            //&& cnt[i][j]==0としなくてもACになる
            else if(s[i][j]=='#') cout<<s[i][j];
        }
        cout<<endl;
    }
    //cout<<endl;

}



