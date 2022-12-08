#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    int p[26];
    for(int i=0;i<26;i++) cin>>p[i];

    for(int i=0;i<26;i++){
        int P = p[i] - 1;
        char t = P + 'a';
        cout<<t;
    }
    cout<<endl;
}
