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
map<int,int> Map;

int main(){
    int n,k; cin>>n>>k;

    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=k;i++) cin>>b[i];

    int max=0;
    queue<int> Q;

    Q.push(0);

    for(int i=1;i<=n;i++){
        int s=a[i];
        if(s>=max){
            if(s==max){
            max=s;
            Q.pop();
            Q.push(i);
            }      
    }

    int ans=Q.front();
    for(int i=1;i<=k;i++){
        if(ans==b[i]){
            cout<<"Yes"<<endl;
            return 0;
        }
    }

    cout<<"No"<<endl;

}

case1 で5番目の10とi==5を格納してしまうため、ミスになる。