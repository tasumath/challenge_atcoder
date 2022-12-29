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
    int n,m,x; cin>>n>>m>>x;
    int a[m+1];
    for(int i=1;i<=m;i++) cin>>a[i];
    int place_cost[n+1];
    for(int i=0;i<=n;i++) place_cost[i] = 0;
    for(int i=1;i<=m;i++) place_cost[a[i]]++;

    int place = x;
    int sum_cost = 0;
    int ans = (1<<30);
    //cout<<ans<<endl;
    while(place > 0){
        if(place_cost[place] > 0) sum_cost = sum_cost + 1;
        place = place - 1; 
    }

    ans = min(sum_cost,ans);


    //初期化
    place = x;
    sum_cost = 0;
    while(place < n){
        if(place_cost[place] > 0) sum_cost = sum_cost + 1;
        place = place + 1; 
    }

    ans = min(sum_cost,ans);

    cout<<ans<<endl;
}