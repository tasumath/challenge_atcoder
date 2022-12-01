#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int a[1100000];
int flag[1100000];

int main(){
    int n; cin>>n;
    int w; cin>>w;
    for(int i=1;i<=n;i++) cin>>a[i];

    for(int i=1;i<=w;i++) flag[i]=0;

    for(int i=1;i<=n;i++){
        int f=a[i];
        if(f<=w) flag[f]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1+i;j<=n;j++){
        int f=a[i]+a[j];
        if(f<=w) flag[f]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1+i;j<=n;j++){
            for(int k=j+1;k<=n;k++){
                int f=a[i]+a[j]+a[k];
                if(f<=w) flag[f]=1;
            }
        }
    }

    int cnt=0;
    for(int i=1;i<=w;i++) cnt=cnt+flag[i];

    cout<<cnt<<endl;

}