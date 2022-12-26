#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin>>n;
    long long int l[87];

    for(int i=0;i<=86;i++) l[i] = 0;
    l[0] = 2;
    l[1] = 1;
    for(int i=2;i<=n;i++){
        l[i] = l[i-1] + l[i-2];
    }
    cout<<l[n]<<endl;
}