#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int l[1001];
    int r[1001];
    for(int i=0;i<n;i++){
      cin>>l[i]>>r[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
      int a = l[i];
      int b = r[i];
      int add = (r[i] - l[i]) + 1;
      sum = sum + add;
    }
    cout<<sum<<endl;
}