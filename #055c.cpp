#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    long long int n,m; cin>>n>>m;
    long long int ans = 0LL;
    long long int s,c;
    
    if((n==0 && m<=3) || (n==1 && m<=1)){
      cout<<ans<<endl;
      return 0;
    }

    if(n*2LL<=m){
      ans = ans + n;
      m = m - n*2LL;
      n=0;
    }
    else{
      //n*2LL>=mの場合.mを使い切ってしまうので終わり.
      ans = ans + m/2LL;
      cout<<ans<<endl;
      return 0;
    }

    if(m>=4){
    c = m/4LL;
    ans = ans + c;
    cout<<ans<<endl;
    }
    else{
      cout<<ans<<endl;
    }
}


