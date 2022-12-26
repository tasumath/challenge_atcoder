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
    string n; cin>>n;
    int f = n[0] - '0';
    int s = n[1] - '0';
    int t = n[2] - '0';
    int g = n[3] - '0';

    bool hantei = false;
    if((f==s && s==t) || (s==t && t==g)) hantei =true;

    if(hantei) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}