#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    long long int n,k; cin>>n>>k;
    if(n==1){
      cout<<n*k<<endl;
      return 0;
    }
    long long int ball = 0;
    long long int ans = k;
    if(2<=n){
      ball ++;
      while(ball<n){
        ans =  ans*(k-1);
        ball ++;
      }
    }

    cout<<ans<<endl;
}