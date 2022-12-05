#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin>>s;
  string t; cin>>t;
  
  int k=(t[0]-s[0]+26) %26;
  string s2=s;
  for(int i=0;i<(int)s.size();i++){
    //'a'で引くという発想がなかった.%26で割った後
    //'a'を足してsのi文字目がtに一致するかを見てる
    s2[i]=((s2[i]-'a')+k)%26 +'a';
  }
  if(s2==t) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;

  return 0;
}
