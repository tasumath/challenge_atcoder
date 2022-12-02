#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

vector<int> s(3);

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a==0 && c==0){
      if(b<=d) cout<<"Takahashi"<<endl;
      else cout<<"Aoki"<<endl;
      return 0;
    }

    if(a==0 || c==0){
      if(a==0){
      cout<<"Takahashi"<<endl;
      }
      else{
        cout<<"Aoki"<<endl;
      }
      return 0;
      
      if(c==0){
      cout<<"Aoki"<<endl;
      }
      else{
        cout<<"Takahashi"<<endl;
      }
      return 0;
    }


    if(a<=c){
      if(b<=d){
        cout<<"Takahashi"<<endl;
        return 0;
      }
    }
    else{
      cout<<"Aoki"<<endl;
      return 0;
    }


}