#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

func(int x){
    return func(func(func(t)+t)+func(func(t)));
}


int main(){
    int t; cin>>t;

    int ans = func(t);

    cout<<ans<<endl;

}
