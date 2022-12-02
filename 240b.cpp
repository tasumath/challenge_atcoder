#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

vector<long long int>a(1100);
int flaga[1000009];
int flagb[1000009];
int flagb[1000009];
//long long mod = (1<<27);
int main(){
    int n; cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];

    for(int i=1;i<=1000;i++) flaga[i]=0;
    for(int i=1;i<=1000000;i++) flagb[i]=0;


    for(int i=1;i<=1000;i++){
        if(a[i]<=1000){
            flaga[a[i]]=flaga[a[i]]+1;
        }
        if(1000<a[i] && a[i]<1000000){
            long long fal = a[i]/1000LL;
            flagb[fal]=flagb[fal]+1;
        }
        if(1000000<=a[i] && 100000000<a[i]){
            long long fal=a[i]%1000000;
            flagc[fal]=flagc[fal]+1;
        }
            
    }
    long long cnt=0;
    for(int i=1;i<=1000;i++){
        if(flaga[i]>0) cnt++;
    }
    for(int i=1;i<=1000000;i++){
        if(flagb[i]>0) cnt++;
    }


    cout<<cnt<<endl;
}