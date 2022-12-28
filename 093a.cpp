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
    string s; cin>>s;
    sort(s.begin(),s.end());
    if(s=="abc") cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}