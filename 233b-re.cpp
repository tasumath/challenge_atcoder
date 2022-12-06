#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;


int main(){
  int l; cin>>l;
  int r; cin>>r;

  l=l-1;
  r=r-1;
  string s; cin>>s;
  
  while(l<r){
    swap(s[l],s[r]);
    l=l+1;
    r=r-1;
  }

  cout<<s<<endl;


}