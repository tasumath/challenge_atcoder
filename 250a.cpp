#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int h,w,r,c;

    cin>>h>>w;
    cin>>r>>c;


    if(h==w==r==c==1){
        cout<<0<<endl;
        return 0;
    }

    //縦 or 横にそれぞれ一列一行だけ
    if(h==1 || w==1){
        if(r==1 && c==1 || r==h && c==w){
            cout<<1<<endl;
            return 0;
        }
        else{
            cout<<2<<endl;
            return 0;
        }
    }

    //2
    if(r==1 && c==1 || r==1 && w==c || h==r && c==1 || h==r && w==c){
        cout<<2<<endl;
        return 0;
    }
    //3
    if(1<c && c<w && r==1 || 1<c && c<w && h==r){
        cout<<3<<endl;
        return 0;
    }
    if(1<r && r<h && c==1 || 1<r && r<h && c==w){
        cout<<3<<endl;
        return 0;
    }
    //4
    cout<<4<<endl;
    return 0;


}