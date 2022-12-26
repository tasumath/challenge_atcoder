#include <bits/stdc++.h>
using namespace std;

int main(){
  char a,b; cin>>a>>b;
  int f = (int)a;
  int g = (int)b;
  if(a<b) cout<<"<"<<endl;
  else if(f>g) cout<<">"<<endl;
  else if(f==g) cout<<"="<<endl;
}