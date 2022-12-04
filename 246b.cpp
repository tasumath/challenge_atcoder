#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;


int main(){
  float a,b; cin>>a>>b;

  float x = sqrt(a*a+b*b);

  float x_ans = a/x;
  float y_ans = b/x;

  cout<<x_ans<<" ";
  cout<<y_ans<<endl;


}