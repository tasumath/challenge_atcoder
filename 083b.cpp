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
    int n,a,b; cin>>n>>a>>b;
    int sum = 0;
    for(int i=1;i<=n;i++){
        int keta_sum = 0;
        string s = to_string(i);
        int x = s.size();
        for(int i=0;i<x;i++){
            int y = s[i] - '0';
            keta_sum = keta_sum + y;
        }
        if(a<=keta_sum && keta_sum<=b) sum = sum + i;
    }

    cout<<sum<<endl;
    
}