#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
#include<set>
#include<queue>
using namespace std;

int main(){
  string S;
  cin>>S;
  int s=S.size();

  int cnt=0;

  for(int i=0;i<s;i++){
    if(S[i]=='v') cnt++;
    if(S[i]=='w') cnt=cnt+2;
  }

  cout<<cnt<<endl;


}