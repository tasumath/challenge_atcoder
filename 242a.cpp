#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){

    float a,b,c,x;
    cin>>a>>b>>c>>x;
    bool hantei=false;
    
    if(x<=a){
        float answer=x/x;
        cout<<answer<<endl;
        return 0;
    }

    if(a<x && x<=b) hantei=true;
    
    if(hantei){
      //cout<<1<<endl;
      float Ans = c/(b-a);
      cout<<Ans<<endl; 
      return 0;
    }

    float ans = 0/c;
    cout<<ans<<endl;

//float ans = (float)0/cとしても大丈夫だった

}