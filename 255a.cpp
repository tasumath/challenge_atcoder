#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int a[2][2];

int main(){
    int r,c; cin>>r>>c;

    for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            cin>>a[i][j];
        }
    }
    r=r-1;
    c=c-1;
    cout<<a[r][c]<<endl;
}

//宣言の仕方がa[1][1]とすると
//1 2
//3 50
//7 83

//で7が返ってくる

//なぜ？？？？？