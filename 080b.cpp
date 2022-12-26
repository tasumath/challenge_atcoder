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
    int keta = s.size();
    int total = 0;
    for(int i = 0; i<keta; i++){
        int y = s[i] - '0';
        total = total + y;
        total = total*10;
    }
    total = total/10;


    int sum = 0; 
    for(int i = 0; i<(int)s.size(); i++){
        sum = sum + (s[i] - '0');
    }
    if(total % sum == 0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}