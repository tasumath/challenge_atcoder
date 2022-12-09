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
    int n; cin>>n;
    int ans = 0;
    for(int i=0;i<=n;i++){
        ans = ans + i;
    }
    cout<<ans<<endl;
}