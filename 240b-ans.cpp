#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
//a[i]が初めて登場する整数であるための条件は、全てのj<iに対してa[j]!=a[i]であること
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=1;i<=n;i++) cin>>a[i];

    int cnt=0;
    for(int i=1;i<=n;i++){
        bool hantei=false;
        for(int j=1;j<i;j++){
            if(a[i]==a[j]) hantei=true;
        }
        if(!hantei) cnt++;
    }

    cout<<cnt<<endl;

}