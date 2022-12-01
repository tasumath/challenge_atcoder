#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    string s; cin>>s;

    int S=s.size();
    int roop = 6/S;

    for(int i=0;i<roop;i++){
        cout<<s;
    }
    cout<<endl;
    return 0;
    
}