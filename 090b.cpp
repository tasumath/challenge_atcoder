#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b; cin>>a>>b;
    int cnt = 0;
    for(int i=a;i<=b;i++){
    
    int man_keta = i/10000;

    int sen = i-(10000*man_keta);
    int sen_keta = sen/1000;

    int hyaku = sen - (1000*sen_keta);
    int hyaku_keta = hyaku/100;

    int j = hyaku - (hyaku_keta*100);
    int j_keta = j/10;

    int ichi_keta = i%10;

    if(man_keta == ichi_keta && sen_keta == j_keta) cnt++;
    }

    cout<<cnt<<endl;
}