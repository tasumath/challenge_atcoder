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

string s[101],t[101];

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int m; cin>>m;
    for(int i=0;i<m;i++){
        cin>>t[i];
    }

    int ans = 0;
    for(int i=0;i<n;i++){
        int point = 0;
        for(int j=0;j<n;j++) if(s[j]==s[i]) point++;
        for(int k=0;k<m;k++) if(t[k]==s[i]) point--;
        ans = max(ans,point);
    }
    cout<<ans<<endl;

}