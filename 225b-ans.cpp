#include<bits/stdc++.h>
using namespace std;

int main(){
     int n; cin>>n;
     vector<int> count(n+1);
     for(int i=1;i<n;i++){
      int a,b;
      cin>>a>>b;
      count[a]++;
      count[b]++;
     }
     for(int i=1;i<=n;i++){
      if(count[i]==n-1){
        cout<<"Yes"<<endl;
        return 0;
      }
     }
     cout<<"No"<<endl;

     return 0;
}