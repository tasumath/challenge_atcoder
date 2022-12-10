#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    string s; cin>>s;
    int n = s.size();
    int start = s[0] - 'A';
    int cnt = 0;
    for(int i=0;i<n;i++){
        int x = s[i] - 'A';
        if(x != start){
            cnt++;
            start = x;
        }
    }
    cout<<cnt<<endl;   
}
