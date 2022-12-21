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
    long long int a,b,x;
    cin>>a>>b>>x;
    //(4-1)以下で2で割れるもの 2 1個 l.18 a=a-1;
    //8以下で2で割れるもの 2,4,6,8 4個
    //4以上8以下の整数で2で割れるもの
    long long int ans;
    
    if(a==0) ans = (b/x - a/x) + 1;
    else ans = (b/x - (a-1)/x);

    cout<<ans<<endl;
}