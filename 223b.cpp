#include <bits/stdc++.h>
using namespace std;

int main(){
  //右シフト1回は,左シフトをN-1回行うことと同じ.
    string s; cin>>s;
    int n = s.size();
    vector<string> v(n);
    for(int i=0;i<n;i++){
      //cout<<i<<s.substr(0,i)<<endl;
      //s.sustr(0,0)では何も表示されない
      //部分列を取り出すというのがシフト操作に対応する
      v[i] = s.substr(i,n-i) + s.substr(0,i);
      //cout<<v[i]<<endl;
    }

    cout<<*min_element(v.begin(),v.end())<<endl;
    cout<<*max_element(v.begin(),v.end())<<endl;

}