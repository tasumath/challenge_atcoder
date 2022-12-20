#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    vector<int> l(n);
    for(int i=0;i<n;i++) cin>>l[i];
    sort(l.rbegin(),l.rend());
    int sum = 0;
    for(int i=0;i<k;i++){
      sum = sum + l[i];
    }
    cout<<sum<<endl;
}


