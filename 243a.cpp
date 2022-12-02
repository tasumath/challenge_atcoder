#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){

    int v,a,b,c;
    cin>>v>>a>>b>>c;

    int res=v;
    int turn = 1;
    while(v>0){
        if(turn%3==1){
            v=v-a;
            if(v==0){
                cout<<"M"<<endl;
                return 0;
            }
            if(v<0) break;
            turn++;
            continue;
        }
        if(turn%3==2){
            v=v-b;
            if(v==0){
                cout<<"T"<<endl;
                return 0;
            }
            if(v<0) break;
            turn++;
            continue;
        }
        if(turn%3==0){
            v=v-c;
            if(v==0){
                cout<<"F"<<endl;
                return 0;
            }
            if(v<0) break;
            turn++;
            continue;
        }
    }
    if(turn%3==2) cout<<"M"<<endl;
    if(turn%3==0) cout<<"T"<<endl;
    if(turn%3==1) cout<<"F"<<endl;
    
    
}