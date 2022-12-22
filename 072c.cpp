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
    int n; cin>>n;
    int a[100010];
    for(int i=1;i<=n;i++) cin>>a[i];

    int cnt[100010];
    //iの範囲をi<=100010としていてREとなった.cntの配列の要素数を超えてしまったのが良くなかった.
    for(int i=0;i<=100009;i++){
        cnt[i] = 0;
    }
    for(int i=1;i<=n;i++){
        int y = a[i];
        cnt[y+1] = cnt[y+1] + 1;
        cnt[y] = cnt[y] + 1;
        cnt[y-1] = cnt[y-1] + 1;
    }

    int max = -1;
    for(int i=0;i<=100009;i++){
        if(max < cnt[i]){
            max = cnt[i];
        }
    }

    cout<<max<<endl;
    return 0;
}