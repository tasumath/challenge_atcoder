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
    int n,m; cin>>n>>m;
    long long int a[n+1];
    long long int b[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
    }
    int c[m+1];
    int d[m+1];
    for(int i=1;i<=m;i++){
    cin>>c[i];
    cin>>d[i];
    }
    for(int i=1;i<=n;i++){
        int A = a[i];
        int B = b[i];
        long long int ans = (1<<30);
        int j_check = -1;
        for(int j=1;j<=m;j++){
            long long int dis = abs(A - c[j]) + abs(B - d[j]);
            int cnt=0;
            if(ans > dis){
            ans = min(dis,ans);
            if(cnt==0){
            j_check = j;
            cnt++;
            }
            }
        }
        cout<<j_check<<endl;
    }
}