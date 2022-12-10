#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    int h,w; cin>>h>>w;
    char a[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<a[i][j];
        }
        cout<<endl;
        for(int j=0;j<w;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
