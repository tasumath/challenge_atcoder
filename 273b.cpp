#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;
int main(){
long long x;
int k;
 cin>>x>>k;

long long pow10=1;
//pow10をLL型で宣言すること
for(int i=0;i<k;i++){
    x=x/pow10;
    int m=x%10;

    if(m>=5){
        x=x+(10-m);
        x=x*pow10;
    }
    else{
        x=x-m;
        x=x*pow10;
    }

    pow10=pow10*10;
    
}

cout<<x<<endl;

}