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

int c[3][3];
int main(){
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cin>>c[i][j];
        }
    }
    int sum = 0;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            sum = sum + c[i][j];
        }
    }
    if(sum%3==0){
        sum = sum/3;
    }
    else cout<<"No"<<endl;
}