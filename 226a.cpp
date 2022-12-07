#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    string s; cin>>s;
    int n = s.size();
    char save;
    int save_pos;
    string f;
    for(int i=0;i<n;i++){
      if(s[i] == '.'){
        f = s.substr(0,i);
        save_pos = i;
        save = (char)s[i+1];
      }
    }

    int num = save - '0';
    //cout<<num<<endl;
    //cout<<save<<endl;
    //cout<<f<<endl;

    int u = f.size();
    int keta = 1;
    int ans = 0;
    for(int i=u-1;i>=0;i--){
      int y = f[i]-'0';
      ans = keta*y+ans;
      keta = keta*10;
    }

    if(num>=5) cout<<ans+1<<endl;
    else cout<<ans<<endl;

}