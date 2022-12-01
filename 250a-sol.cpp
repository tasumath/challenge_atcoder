#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int h,w,r,c;

    cin>>h>>w;
    cin>>r>>c;

int cnt=0;

if(r!=1) cnt=cnt+1;
if(r!=h) cnt=cnt+1;
if(c!=1) cnt=cnt+1;
if(c!=w) cnt=cnt+1;

cout<<cnt<<endl;


}