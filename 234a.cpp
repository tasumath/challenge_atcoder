#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;
int t;

int func(int x){
    return x*x+2*x+3;
}


int main(){
    cin>>t;

    cout<<func(func(func(t)+t)+func(func(t)))<<endl;

}
