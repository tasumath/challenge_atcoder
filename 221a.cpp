#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    int a,b; cin>>a>>b;
    int c = a - b;

    int ans=1;
    for(int i=0;i<c;i++){
      ans=ans*32;
    }

    cout<<ans<<endl;
    
}