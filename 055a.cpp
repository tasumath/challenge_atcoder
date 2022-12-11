#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    int n; cin>>n;
    int can = n/15;
    cout<<((n-can)*800) + can*600<<endl;
}
