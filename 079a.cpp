#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(void){
int N; cin>>N;

int a=N/1000;
int b=(N-a*1000)/100;
int c=(N-a*1000-b*100)/10;
int d=(N-a*1000-b*100-c*10);

if(a==b && b==c){
  cout<<"Yes"<<endl;
  return 0;
}

if(b==c && c==d){
  cout<<"Yes"<<endl;
  return 0;
}

else cout<<"No"<<endl;


}

//if(a==b==c)とは出来ない。if(a==b && b==c)とすること。