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
    int n,x; cin>>n>>x;
    
    vector<int> m(n);
    for(int i=0;i<n;i++){
        cin>>m[i];
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + m[i];
    }
    
    sum = x - sum;

    sort(m.begin(),m.end());

    //cout<<m[0]<<endl;

    if(sum > 0) sum = (sum/m[0]);

    cout<<(sum + n)<<endl;

}