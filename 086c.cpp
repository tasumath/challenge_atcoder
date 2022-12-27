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
    int n; cin>>n;
    int t[n],x[n],y[n];
    for(int i=0;i<n;i++){
        cin>>t[i]>>x[i]>>y[i];
    }
    int x_ = 0;
    int y_ = 0;
    int t_ = 0;
    bool hantei = false;
    for(int i=0;i<n;i++){
        int xx = abs(x[i] - x_);
        int yy = abs(y[i] - y_);
        int tt = t[i] - t_;
        if(tt%2 == (xx+yy)%2 && xx+yy<=tt) hantei = true;
        else{
            hantei = false;
            break;
        }
        t_ = t[i] , x_ = x[i] , y_ = y[i];
    }
    if(hantei) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}