#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
  int x,y; cin>>x>>y;

  int ans=y-x;
  if(ans<=0){
    cout<<0<<endl;
    return 0;
  }
  else{
    int keta = ans/10;
    if(ans%10==0) cout<<keta<<endl;
    else cout<<keta+1<<endl;
  }


}
