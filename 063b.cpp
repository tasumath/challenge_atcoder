#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int cnt[27];

int main(){
    string s; cin>>s;
    int n = s.size();
    for(int i=0;i<n;i++){
      int x = s[i] - 'a' + 1;
      //xの値は、aは1,zは26で値が対応している
      cnt[x] = cnt[x] + 1;
    }
    for(int i=0;i<n;i++){
      int x = s[i] - 'a' + 1;
      if(cnt[x]==2){
        cout<<"no"<<endl;
        return 0;
      }
    }
    cout<<"yes"<<endl;
}


