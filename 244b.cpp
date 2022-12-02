#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<map>
#include<queue>

using namespace std;

int a[110];
int b[110];
int flag[110];
int m;

int main(){
    int n,k; cin>>n>>k;

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<k;i++) cin>>b[i];

    m=-1;
    for(int i=0;i<n;i++) m=max(m,a[i]);

    for(int i=0;i<k;i++){
        if(a[b[i]-1]==m){
            cout<<"Yes"<<endl;
            return 0;
        }
    }

    cout<<"No"<<endl;
    return 0;

}