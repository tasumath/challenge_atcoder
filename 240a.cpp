#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int a,b; cin>>a>>b;

    if(a==1 && b==10){
        cout<<"Yes"<<endl;
        return 0;
    }

    int ans=b-a;

    if(ans==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}

