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
    int a,b,c;
    int cnt[101];
    int hantei = 0;
    for(int i=1;i<=100;i++) cnt[i] = 0;
    for(int i=0;i<=2;i++){
        cin>>a;
        cnt[a] = cnt[a] + 1;
    }
    int cn = 0;
    for(int i=1;i<=100;i++){
        if(cnt[i]>0) cn++;
    }
    cout<<cn<<endl;

}