#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
#include<set>
#include<queue>
#include<stack>
using namespace std;

int main(){
    string s; cin>>s;
    int n = s.size(); 
    string t;
    for(int i=0;i<n;i++){
      if(s[i]=='B'){
        if(!t.empty()) t.pop_back();
      }
      else t.push_back(s[i]);
    }

    cout<<t<<endl;
    return 0;
}