#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
#include<set>
#include<queue>
using namespace std;

int main(){
      int x; cin>>x;
      if(x>=90){
        cout<<"expert"<<endl;
      }
      if(70<=x && x<90){
        cout<<90-x<<endl;
      }
      if(40<=x && x<70){
        cout<<70-x<<endl;
      }
      if(0<=x && x<40){
        cout<<40-x<<endl;
      }
}

    


    
