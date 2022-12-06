#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t; cin>>s>>t;
    int x = s.size();
    //char post_s;
    //char nextpost_s;
    //char post_t;
    bool hantei=false;

    if(s==t){
        cout<<"Yes"<<endl;
        return 0;
    }

    for(int i=0;i<x;i++){
        if(s[i] != t[i]){
            //post_s = (char)s[i];
            //nextpost_s = (char)s[i+1];
            swap(s[i],s[i+1]);
            if(s==t){
                hantei=true;
                break;
            }
            else{
                break;
            }
        }
    }

    if(hantei) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}
