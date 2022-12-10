#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
#include<set>
#include<queue>
#include<stack>
using namespace std;

int t[101];
int p[101];
int x[101];

int main(){
    int n; cin>>n;
    for(int i=1;i<=n;i++) cin>>t[i];
    int m; cin>>m;
    for(int i=1;i<=m;i++){
      cin>>p[i]>>x[i];
    }

    for(int i=1;i<=m;i++){
      long long int ans = 0;
      long long int Ans = (1<<30);
      int situ = p[i];
      for(int j=1;j<=n;j++){
        if(situ == j){
          ans = ans + x[i];
          continue;
        }
        ans = ans + t[j];
      }
      Ans = min(ans,Ans);
      cout<<Ans<<endl;
    }
}