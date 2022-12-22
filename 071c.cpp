#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin>>n;
    vector<long long int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,int> Map;
    vector<int> v;

    for(int i=0;i<n;i++){
        Map[a[i]] ++ ;
        if(Map[a[i]]==2) Map[a[i]]=0,v.push_back(a[i]);
    }

    sort(v.rbegin(),v.rend());

    long long int ans = 0;
    if(2<=v.size()) ans = 1LL*v[0]*v[1];
    cout<<ans<<endl;
}