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
    long long int ans = 1;
    for(int i=1;i<=n;i++){
      ans = ans *i;
      ans = ans % 1000000007; 
    }
    cout<<ans<<endl;
}

    


    
