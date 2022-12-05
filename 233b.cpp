#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    int l; cin>>l;
    int r; cin>>r;
    l=l-1;
    r=r-1;
    string s; cin>>s;
    int z=s.size();
    string t;
    for(int i=0;i<l;i++){
        t[i] = s[i];
    }

    string T;
    for(int i=l;i<=r;i++){
        T[i] = s[i];
    }



    for(int i=0;i<l;i++) cout<<t[i];
    for(int i=r;i>=l;i--) cout<<T[i];
    for(int i=r+1;i<z;i++) cout<<s[i];

    cout<<endl;


}
