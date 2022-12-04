#include <bits/stdc++.h>
using namespace std;

int n;

void func(int x){
  if(x==n){
    cout<<n;
    af_func(x-1);
  }
  cout<<x<<" ";
  func(x+1);
}

void af_func(int y){
  if(y==1){
    cout<<y;
    return 0;
}

}


int main(){
  cin>>n;
  func(n-1);

}
