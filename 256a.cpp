#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    long long ans=2;
    if(n==0){
        cout<<1<<endl;
        return 0;
    }
    for(int i=1;i<n;i++) ans = ans*2;
    cout<<ans<<endl;
}