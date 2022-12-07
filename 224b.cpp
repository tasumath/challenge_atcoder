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

long long int a[50][50];

int main(){
    int h,w; cin>>h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
        }
    }

    bool hantei = true;

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            for(int k=i;k<h;k++){
                for(int l=j;l<w;l++){
                    long long int x = a[i][j]+a[k][l];
                    long long int y = a[k][j]+a[i][l];
                    if(x>y) hantei=false;
                }
            }
        }
    }

    if(hantei) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}

    


    
