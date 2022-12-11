#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
  char a,b; cin>>a>>b;
  bool top = false;
  if(a=='H' && b=='H') top = true;
  if(a=='D' && b=='H') top = false;
  if(a=='D' && b=='D') top = true;
  if(a=='H' && b=='D') top = false;
  if(top==true) cout<<'H'<<endl;
  else cout<<'D'<<endl;
}