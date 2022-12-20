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
    int a[3]; 
    for(int i=0;i<3;i++) cin>>a[i];
    sort(a,a+3);

    //for(int i=0;i<3;i++) cout<<a[i]<<endl;

    cout<<a[0]+a[1]<<endl;
    
}