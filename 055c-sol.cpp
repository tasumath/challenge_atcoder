#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    long long int n,m; cin>>n>>m;
    bool hantei = true;
    long long int cnt = 0;
    long long int ans;
    if(n>=m){
        ans = m/2;
    }
    else{
        ans = n + ((m - n*2)/4);
    }
    cout<<ans<<endl;
}
