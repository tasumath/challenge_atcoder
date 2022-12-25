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

long long int a[110000];

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    map<long long int,long long int> Map;
    for(int i=0;i<n;i++){
        Map[a[i]]++;
    }
    long long int cnt = 0;
    map<long long int,long long int> count;
    for(int i=0;i<n;i++){
        int x = 0;
        //種類なので一度数えたらスルーする必要がある.
        if(count[a[i]]==0){
            x = Map[a[i]] % 2 ;
            count[a[i]]++;
        }

        if(x==1) cnt++;
    }

    cout<<cnt<<endl;

}