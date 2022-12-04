#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int a[10];
int main(){
  string s; cin>>s;
  for(int i=0;i<9;i++){
    int f = s[i]-'0';
    a[f]=a[f]+1;
  }

  for(int i=0;i<=9;i++){
    if(a[i]==0){
      cout<<i<<endl;
      return 0;
    }
  }
  

}