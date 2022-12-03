#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;


int main(){
  int N; cin>>N;
  vector<int> a(N);
  for(int i=0;i<N;i++) cin>>a[i];

  sort(a.rbegin(),a.rend());

  vector<int> b(N);
  for(int i=0;i<N;i++){
    if(a[i]%2==0) b[i]=a[i];
  }
  vector<int> c(N);
  for(int i=0;i<N;i++){
    if(a[i]%2==1) c[i]=a[i];
  }
  sort(b.rbegin(),b.rend());
  sort(c.rbegin(),c.rend());


if(b[0]==0 || b[0]!=0 && b[1]==0){
  if(c[0]==0 || c[0]!=0 && c[1]==0){
    cout<<-1<<endl;
    return 0;
  }
}

if(c[0]==0 || c[0]!=0 && c[1]==0){
  if(b[0]==0 || b[0]!=0 && b[1]==0){
    cout<<-1<<endl;
    return 0;
  }
}

long long bkoho;
  bkoho=(long long)(b[0])+b[1];


long long ckoho;
  ckoho=(long long)(c[0])+c[1];

if(bkoho>ckoho) cout<<bkoho<<endl;
else cout<<ckoho<<endl;

}