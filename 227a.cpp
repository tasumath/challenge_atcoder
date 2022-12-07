#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int n,k,a; cin>>n>>k>>a;
    
    int card = 0;
    //aの人にcardを渡すことを考えると,a-1スタートするべき.
    int start = a-1;
    //roopをcard<=kにしていて躓いた.
    while(card<k){
      card = card + 1;
      start = start +1;
      if(start==n+1) start=1;
    } 

    cout<<start<<endl;

}