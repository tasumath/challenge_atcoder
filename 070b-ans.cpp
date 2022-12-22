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
    const int lower = max(a,c);
    const int upper = min(b,d);

    cout<<max(0,upper - lower)<<endl;


}