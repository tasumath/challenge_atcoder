#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> d(n);
    for(int i=0;i<n;i++) cin>>d[i];

    sort(d.rbegin(),d.rend());
    
    int cnt = 0;
    int koho = -1; 
    for(int i=0;i<n;i++){
        if(koho != d[i]){
            cnt = cnt + 1;
            koho = d[i];
        }
    }
    cout<<cnt<<endl;
}