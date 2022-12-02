#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    int a[1000];//vector<int> a(n)の指定だとなぜできないのか。
    int b[1000];//vectorをint型の配列にしたらRE,WAがなくなった。

    for(int i=1;i<=n;i++) cin>>a[i];
    for(int j=1;j<=m;j++) cin>>b[j];

    //sort(a.begin(),a.end());
    //sort(b.begin(),b.end());

    vector<bool> flag(n,false);

    bool success=true;

    for(int i=1;i<=m;i++){
        int hantei=b[i];
        int cnt=0;
        for(int j=1;j<=n;j++){
            if(hantei==a[j] && flag[j]==false){
                flag[j]=true;
                cnt++;
                break;
            }
        }
        if(cnt==0){
            success=false;
        }
    }

    if(success) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
    
}