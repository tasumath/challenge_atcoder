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
    int a_point = 0;
    int z_point = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a_point=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='Z'){
            z_point=i;
            break;
        }
    }
    cout<<z_point - a_point + 1<<endl;
}
