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

int a[101];

int main(){
    int n,d,x; 
    cin>>n>>d>>x;
    for(int i=1;i<=n;i++) cin>>a[i];
    
    int sum = 0;
    for(int i=1;i<=n;i++){
        int day = 1;
        int j = 1;
        int cnt = 0;
        while(day <= d){
            //cout<<"i"<<i<<":"<<"day:"<<day<<endl;
            cnt = cnt + 1;
            day = 1;
            day = day + a[i]*j;
            j++;
        }
        sum = sum + cnt; 
    }

    cout<<(sum + x)<<endl;

}