#include <bits/stdc++.h>
using namespace std;

char a[101][101];
int main(){
    int h,w; cin>>h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<=h+1;i++){
        if(i==0 || i==h+1){
            for(int j=0;j<=w+1;j++){
                cout<<'#';
            }
            cout<<endl;
            continue;
        }
        for(int k=0;k<=w+1;k++){
            if(k==0 || k==w+1){
                cout<<'#';
                continue;
            }
            cout<<a[i-1][k-1];
        }
        cout<<endl;
    }
}