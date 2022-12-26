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
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,int> cnt;
    for(int i=0;i<n;i++) cnt[a[i]]++;
    vector<int> v;
    for(auto &p:cnt) v.push_back(p.second);
    sort(v.begin(),v.end());
    int x = v.size();
    //for(int i=0;i<x;i++) cout<<i<<":"<<v[i]<<endl;
    

    if(x<=k){
        cout<<0<<endl;
    }
    else{
        int ans = 0;
        for(int i=0;i<(x-k);i++) ans = ans + v[i];
        cout<<ans<<endl;
    }
    

}