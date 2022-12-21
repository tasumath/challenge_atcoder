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

    bool hantei = true;
    while(hantei){
      n = n - 1;
      m = m - 2;
      ans = ans + 1LL;
      if(n==0 || m<=1) hantei = false;
    }

    if(m>=4){
    long long int k = (m/4LL);
    ans = ans + k;
    }

    cout<<ans<<endl;
    
}


