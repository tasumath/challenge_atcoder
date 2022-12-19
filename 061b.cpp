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

int cnt[51][51];

int main(){
    int n,m; cin>>n>>m;
    int a[m],b[m];
    for(int i=0;i<m;i++){
        cin>>a[i]>>b[i];
    }

    for(int i=0;i<=51;i++){
        for(int j=0;j<=51;j++){
            cnt[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        cnt[a[i]][b[i]] = cnt[a[i]][b[i]] + 1;
        cnt[b[i]][a[i]] = cnt[b[i]][a[i]] + 1;
    }
    for(int i=1;i<=n;i++){
        int count = 0;
        for(int j=1;j<=n;j++){
            if(cnt[i][j]>0) count = count + cnt[i][j];
        }
        cout<<count;
        if(i!=n) cout<<endl;
    }
}