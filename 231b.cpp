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
    vector<string> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int max=-1;
    string ans;

    for(int i=0;i<n;i++){
        string t = v[i];
        int cnt=0;
        for(int j=0;j<n;j++) if(v[j]==t) cnt++;
        if(cnt>max){
            max=cnt;
            ans=t;
        }
    }

    cout<<ans<<endl;


}