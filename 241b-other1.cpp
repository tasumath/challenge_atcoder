#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    map<int,int> Map;
    int x;

    for(int i=0;i<n;i++){
        //xの値が集合の中に一つあるということをカウントする
        cin>>x;
        Map[x]++;
    }
    int y;
    for(int i=0;i<m;i++){
        cin>>y;
        if(Map[y]==0){
            cout<<"No"<<endl;
            return 0;
        }
        Map[y]=Map[y]-1;
    }

    cout<<"Yes"<<endl;
    return 0;

}