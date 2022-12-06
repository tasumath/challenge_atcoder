#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];

  sort(a.begin(),a.end());

  int cnt=0;
  int f=-1;
  for(int i=0;i<n;i++){
    if(f!=a[i]){
      cnt++;
      f=a[i];
    }
  }

  cout<<cnt<<endl;

}
