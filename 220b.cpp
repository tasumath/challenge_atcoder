#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;
//一回目WA.二回目にAC.原因は宣言.問題文の制約よりans,bnsがintの範囲を超える場合ある.
int main(){
    int k; cin>>k;
    string a,b; cin>>a; cin>>b;
    int z = a.size();
    int y = b.size();
    long long int keta=1;
    long long int ans=0;
    long long int bns=0;
    for(int i=z-1;i>=0;i--){
        long long int c = a[i]-'0';
        //cout<<c<<endl;
        //cout<<keta*c;
        ans = (keta*c) + ans;
        //cout<<ans<<endl;
        keta=keta*k;
    }

    keta=1;
    for(int i=y-1;i>=0;i--){
        long long int c = b[i]-'0';
        //cout<<c<<endl;
        //cout<<keta*c;
        bns = (keta*c) + bns;
        //cout<<bns<<endl;
        keta=keta*k;
    }

    cout<<ans*bns<<endl;
}

