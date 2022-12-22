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
    int a,b,c,d;
    int ans = 0;
    cin>>a>>b>>c>>d;
    bool hantei_abc = true;
    bool hantei_bcd = true;

    if(a<=c && c<=b){
    }
    else{
        ans = 0;
    }

    if(b<=c && c<=d){
        if(a<c) ans = d - c;
        else ans = d - a;
    }
    if(c<=b && b<d){
        ans = b - c;
    }

    cout<<ans<<endl;


}