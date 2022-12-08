#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int n; cin>>n;
    int p[n+1];
    for(int i=1;i<=n;i++) cin>>p[i];
    
    int q[n+1];
    for(int i=1;i<=n;i++){
      q[p[i]] = i;
    }
    for(int i=1;i<=n;i++){
      cout<<q[i]<<" ";
    }
    cout<<endl;
}