#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;

int main(){
  string r[4];
  int a=0;
  int b=0;
  int c=0;
  int d=0;
  for(int i=0;i<3;i++){
    string s; cin>>s;
    if(s=="ABC") a=1;
    if(s=="ARC") b=1;
    if(s=="AGC") c=1;
    if(s=="AHC") d=1;
  }

  if(a==0) cout<<"ABC"<<endl;
  if(b==0) cout<<"ARC"<<endl;
  if(c==0) cout<<"AGC"<<endl;
  if(d==0) cout<<"AHC"<<endl;
}

    


    
