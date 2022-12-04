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
    int h,w;
    cin>>h>>w;
    vector<string> s(h),t(h);
    for(auto &nx : s){cin>>nx;}
    //nxがstring型になっていて、s[i]=##..が代入される?
    for(auto &nx : t){cin>>nx;}

    vector<string> S(w),T(w);
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            S[j].push_back(s[i][j]);
            T[j].push_back(t[i][j]);
        }
    }
    sort(S.begin(),S.end());
    sort(T.begin(),T.end());

    //for(int i=0;i<w;i++) cout<<S[i]<<endl;
    //for(int i=0;i<w;i++) cout<<T[i]<<endl;

    if(S==T) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;

}