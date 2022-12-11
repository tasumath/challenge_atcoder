#include<iostream>
using namespace std;
int main(){
  int k,s; cin>>k>>s;
  int cnt=0;
  for(int i=0;i<=k;i++){
    for(int j=0;j<=k;j++){
      int p = s - i - j;
      if(0<=p && p<=k) cnt++;
    }
  }
  cout<<cnt<<endl;
}