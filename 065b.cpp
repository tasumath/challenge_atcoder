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

int a[110000];

int main(){
    int n; cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int trans = 1;
    int start = 0;
    int cnt = 0;
    int j = 1;
    //上手くいかなかったのは、ボタンの番号と配列の番号の違いを放置したこと？？
    while(cnt<=100010){
        start = a[j];
        j = start;
        cnt++;
        if(start==2){
            cout<<cnt<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}