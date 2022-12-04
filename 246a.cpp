#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;


int main(){
  int x1,x2,x3;
  int y1,y2,y3;

  cin>>x1>>y1;
  cin>>x2>>y2;
  cin>>x3>>y3;

  int x_ans;
  int y_ans;

  if(x1==x2) x_ans=x3;
  if(x2==x3) x_ans=x1;
  if(x1==x3) x_ans=x2;

  if(y1==y2) y_ans=y3;
  if(y2==y3) y_ans=y1;
  if(y1==y3) y_ans=y2;

  cout<<x_ans<<" ";
  cout<<y_ans<<endl; 

}