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
    string t; cin>>t;
    sort(s.begin(),s.end());
    sort(t.rbegin(),t.rend());

    //cout<<s<<endl;
    //cout<<t<<endl;
    
    if(s<t) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}