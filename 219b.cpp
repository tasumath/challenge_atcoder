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
    string r[3];
    string t;
    for(int i=0;i<=2;i++){
        cin>>r[i];
    }
    cin>>t;
    int n = t.size();
    for(int i=0;i<n;i++){
        int f = t[i] - '1';
        cout<<r[f];
    }
    cout<<endl;
}