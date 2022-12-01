#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

char S[110][110];

int main(){
    int h,w; cin>>h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>S[i][j];
        }
    }

    int cnt=0;
    int i1=0;
    int j1=0;
    int i2=0;
    int j2=0;

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(S[i][j]=='o'){
                if(cnt==0){
                    i1=i+1;
                    j1=j+1;
                    cnt++;
                }
                else if(cnt==1){
                    i2=i+1;
                    j2=j+1;
                }
            }
        }
    }

    int Answer = abs(i1-i2) + abs(j1-j2);
    cout<<Answer<<endl;

}

