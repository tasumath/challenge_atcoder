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
    string a; cin>>a;
    string b; cin>>b;
    string c; cin>>c;
    int x = a.size();
    int y = b.size();
    int z = c.size();
    if(a[x-1]==b[0] && b[y-1]==c[0]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}