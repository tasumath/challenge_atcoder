#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;


//error: ISO C++ forbids comparison between pointer and integer [-fpermissive]
//12/10 ポインタ/インテグレータの理解必須.インターンもあるのでここは抑える




bool ans = true; 

void situ(bool ans,int n,const string s){
  while(n>0){
      if(n==0) break;

      if(s[n-1]=="e" && s[n-2]=="s" && s[n-3]=="a" && s[n-4]=="r" && s[n-5]=="e"){
        n = n - 5;
        continue;
      }
      if(s[n-1]=="r" && s[n-2]=="e" && s[n-3]=="s" && s[n-4]=="a" && s[n-5]=="r" && s[n-6]=="e"){
        n = n - 6;
        continue;
      }
      if(s[n-1]=="r" && s[n-2]=="e" && s[n-3]=="m" && s[n-4]=="a" && s[n-5]=="e" && s[n-6]=="r" && s[n-7]=="d"){
        n = n - 7;
        continue;
      }
      if(s[n-1]=="m" && s[n-2]=="a" && s[n-3]=="e" && s[n-4]=="r" && s[n-5]=="d"){
        n = n - 5;
        continue;
      }
      else{
        ans = false;
      }
  }

}


int main(){
    string t;
    cin>>t;
    int m = t.size();

    situ(ans,m,t);

    if(ans == true) cout<<"Yes"<<endl;
    else if(ans == false) cout<<"No"<<endl;

}