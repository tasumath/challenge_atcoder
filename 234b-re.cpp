#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;

int main(){
  int n; cin>>n;
  int x[100],y[100];

  for(int i=0;i<n;i++) cin>>x[i]>>y[i];

  float ma=0;

  for(int i=0;i<n;i++){
    for(int j=1+i;j<n;j++){
      int X = x[i]-x[j];
      int Y = y[i]-y[j];
      float ans = sqrt(X*X+Y*Y);
      ma=max(ma,ans);
    }
  }

  cout<<fixed<<setprecision(10)<<ma<<endl;

}