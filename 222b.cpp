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
    int n,p; cin>>n>>p;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.rbegin(),a.rend());

    int score_i=n;
    for(int i=0;i<n;i++){
        if(a[i]<p){
            score_i=i;
            break;
        }
    }

    cout<<n - score_i<<endl;
}

    


    
