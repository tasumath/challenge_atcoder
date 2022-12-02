#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int a[10];
    for(int i=0;i<=9;i++) cin>>a[i];

    int ans=0;

    for(int i=1;i<=3;i++){
        ans = a[ans];
    }
    cout<<ans<<endl;

}