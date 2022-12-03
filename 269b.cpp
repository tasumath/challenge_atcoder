#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

int a[11];
int b[11];

int main(){

  char S[11][11];
  for(int i=1;i<=10;i++){
    for(int j=1;j<=10;j++){
      cin>>S[i][j];
    }
  }

  for(int i=1;i<=10;i++){
    for(int j=1;j<=10;j++){
      if(S[i][j]=='#'){
        a[i]=i;
        b[j]=j;
      }
    }
  }

  int A,B,C,D;

  for(int i=1;i<=10;i++){
    if(a[i]!=0){
      A=a[i];
      break;
    }
  }
  for(int j=1;j<=10;j++){
    if(b[j]!=0){
      C=b[j];
      break;
    }
  }
  for(int i=10;i>=1;i--){
    if(a[i]!=0){
      B=a[i];
      break;
    }
  }
  for(int j=10;j>=1;j--){
    if(b[j]!=0){
      D=b[j];
      break;
    }
  }

  cout<<A<<" "<<B<<endl;
  cout<<C<<" "<<D<<endl;

return 0;

}