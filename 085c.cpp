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
    int y; cin>>y;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            int zangaku = y - (10000*i + 5000*j);
            int maisuu = n - i -j;
            if(maisuu*1000 == zangaku && n - i - j >=0 && zangaku>=0){
                cout<<i<<" "<<j<<" "<<(n-i-j)<<endl;
                return 0;
            }
        }
    }

    cout<<-1<<" "<<-1<<" "<<-1<<endl;

}