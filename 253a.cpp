#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

vector<int> s(3);

int main(){
    int a,b,c;
    cin>>a>>b>>c;

  s[0]=a;
  s[1]=b;
  s[2]=c;

  sort(s.begin(),s.end());

  if(s[1]==b) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;


}