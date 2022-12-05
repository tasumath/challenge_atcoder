#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> x(n),y(n);
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }

    float ma=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int X=x[i]-x[j];
            int Y=y[i]-y[j];
            float ans = sqrt(X*X+Y*Y);
            ma = max(ans,ma);
        }
    }
    cout<<fixed<<setprecision(10)<<ma<<endl;

//fixed<<setprecision(10)は必ず抑える.
}