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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int alice = 0;
    int bob = 0;
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;i++){
        if(i%2==0) alice = alice + a[i];
        else bob = bob + a[i];
        //cout<<alice<<endl;
    }
    cout<<(alice - bob)<<endl;  
}