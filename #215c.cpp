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
    string s;
    int k;
    cin>>s>>k;
    sort(s.begin(),s.end());
    while(k>1){
        next_permutation(s.begin(),s.end());
        k = k - 1;
    }
    cout<<s<<endl;
}