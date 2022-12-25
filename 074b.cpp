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
    int k; cin>>k;
    int sum = 0; 
    for(int i=0;i<n;i++){
        int x; cin>>x;
        int type_a = abs(x - 0);
        int type_b = abs(k - x);
        int add = min(type_a,type_b);
        sum = sum + add; 
    }
    cout<<sum*2<<endl;
}