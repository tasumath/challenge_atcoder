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
    int a= s[0]-'0';
    int b= s[1]-'0';
    int c= s[2]-'0';

    int ans1=100*a+10*b+c;
    int ans2=100*b+10*c+a;
    int ans3=100*c+10*a+b;

    cout<<ans1+ans2+ans3<<endl;
}

    


    
