#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    string s; cin>>s;
    int n = s.size();
    int save;
    for(int i=0;i<n;i++){
      if(s[i] == '.') save = i;
    }

    int y = s[save+1] - '0';
    if(y<=2){
      for(int i=0;i<save;i++){
        cout<<s[i];
      }
      cout<<"-"<<endl;
      return 0;
    }
    if(3<=y && y<=6){
      for(int i=0;i<save;i++){
        cout<<s[i];
      }
      cout<<endl;
      return 0;
    }
    if(7<=y && y<=9){
      for(int i=0;i<save;i++){
        cout<<s[i];
      }
      cout<<"+"<<endl;
      return 0;
    } 
}