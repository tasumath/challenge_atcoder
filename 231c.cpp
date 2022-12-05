#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;

int a[220000];
int n,q; 

int search(int x){
  int pos=lower_bound(a+1,a+n+1,x)-a;
  return pos;
}


int main(){
  cin>>n>>q;
  for(int i=1;i<=n;i++) cin>>a[i];
  
  sort(a+1,a+n+1);

  for(int i=0;i<q;i++){
    int x; cin>>x;
    int place=search(x);
    if(place==n+1) cout<<0<<endl;
    else cout<<n-place+1<<endl;
  }

}
