#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int k; cin>>k;
    sort(s.begin(),s.end());
    while(k>1){
        next_permutation(s.begin(),s.end());
        k--;
    }
    cout<<s<<endl;
    return 0;
}