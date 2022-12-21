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
    reverse(s.begin(),s.end());
    int n = s.size();
    bool hantei = true;
    int i = 0;
    //cout<<s<<endl;
    //cout<<n<<endl;
    while(hantei){
        if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='e' && s[i+3]=='r' && s[i+4]=='d'){
            i = i+5;
            continue;
        }
        if(s[i]=='r' && s[i+1]=='e' && s[i+2]=='m' && s[i+3]=='a' && s[i+4]=='e' && s[i+5]=='r' && s[i+6]=='d'){
            i = i+7;
            continue;
        }
        if(s[i]=='e' && s[i+1]=='s' && s[i+2]=='a' && s[i+3]=='r' && s[i+4]=='e'){
            i = i+5;
            continue;
        }
        if(s[i]=='r' && s[i+1]=='e' && s[i+2]=='s' && s[i+3]=='a' && s[i+4]=='r' && s[i+5]=='e'){
            i = i+6;
            continue;
        }
        if(n==i) break;
        hantei = false;
    }
    if(hantei) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}