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
    cin>>c[0][0]>>c[0][1]>>c[0][2];
    cin>>c[1][0]>>c[1][1]>>c[1][2];

    if(c[1][2]==c[0][0] && c[1][0]==c[0][2] && c[0][1]==c[1][1]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}