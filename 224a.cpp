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

    if(n==2 && s[n-1]=='r' && s[n-2]=='e'){
        cout<<"er"<<endl;
        return 0;
    }
    

    //以下のコードでは,入力 erでコンパイルエラーが出る.
    
    string er = s.substr(n-2,2);
    string ist = s.substr(n-3,4);
    //cout<<s.substr(1,2);
    if(er=="er"){
        cout<<er<<endl;
    }
    if(ist=="ist"){
        cout<<ist<<endl;
    }
    
}
