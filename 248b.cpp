#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    long long a,b,k;
    cin>>a>>b>>k;

    int cnt=0;
    bool hantei=true;
    while(hantei){
        if(a>=b){
            hantei=false;
            break;
        }
        a=a*k;
        cnt++;
    }
    cout<<cnt<<endl;

}
