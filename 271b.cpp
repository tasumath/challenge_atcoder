#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,Q; cin>>N>>Q;
    vector<vector<int>> a(N);

    for(int i=0;i<N;i++){
        int l;
        cin>>l;
        a[i].resize(l);
        for(int j=0;j<l;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<Q;i++){
        int s,t;cin>>s>>t;
        cout<<a[s-1][t-1]<<endl;
    }

}
