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
    long long int n,k; cin>>n>>k;
    int i = 0;
    long long int ans = 1;
    while(i<n){
        if(ans*2 < ans + k) ans = ans *2;
        else ans = ans + k;
        i++;
    }
    cout<<ans<<endl;
}