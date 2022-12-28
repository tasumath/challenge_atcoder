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

int main(){
    char c[3][3];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cin>>c[i][j];
        }
    }

    cout<<c[0][0]<<c[1][1]<<c[2][2]<<endl;

}