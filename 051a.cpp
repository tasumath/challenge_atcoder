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
    int cnt=0;
    int f_point,s_point;

    for(int i=0;i<(int)s.size();i++){
        if(s[i]==','){
            if(cnt==0){
                f_point=i;
                cnt++;
                //cout<<f_point<<endl;
                continue;
            }
            if(cnt==1){
                s_point=i;
                cnt++;
                //cout<<s_point<<endl;
            }
        }
    }

    for(int i=0;i<(int)s.size();i++){
        if(f_point==i || s_point==i){
            cout<<" ";
        }
        else{
            cout<<s[i];
        }
    }
    cout<<endl;
}