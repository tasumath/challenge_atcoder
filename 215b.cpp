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
    long long int n; cin>>n;
    long long int ans = 1;
    long long int cnt = 0;
    
    if(n==1){
        cout<<0<<endl;
        return 0;
    }

    while(ans<n){
        ans = ans *2;
        cnt++;
    }

    if(ans>n) cout<<cnt-1<<endl;
    if(ans==n) cout<<cnt<<endl;
}