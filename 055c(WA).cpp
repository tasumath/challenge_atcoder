#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    long long int n,m; cin>>n>>m;
    bool hantei = true;
    long long int cnt = 0;
    if(n==1 && m<=1){
        cout<<0<<endl;
        return 0;
    }

    while(hantei){
        n = n - 1;
        m = m - 2;
        cnt++;
        if(m<=1){
            break;
        }
        if(n==0){
            m = m - 2;
            if(m<=1){
                break;
            }
            n = n + 1;
        }
    }
    cout<<cnt<<endl;
}
