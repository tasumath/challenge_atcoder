#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<map>
#include<queue>

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());

    //n==1のコーナーケースを加えること
    if(n==1){
        if(a[0]==0) cout<<1<<endl;
        else cout<<0<<endl;
        return 0;
    }



    int hantei=0;
    for(int i=0;i<n;i++){
        if(a[i]==hantei) hantei++;
    }

    cout<<hantei<<endl;
}