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
    int a,b; cin>>a>>b;
    string s; cin>>s;
    //bool hantei = false;
    int n = s.size();
    //cout<<n<<endl;
    int cnt = 0;
    
    for(int i=0;i<n;i++){
        int x = s[i] - '0';
        //cout<<"i:"<<i<<x<<endl;
        if(x == -3) continue;
        if(0<=x && x<=9) cnt = cnt + 1;
        else break;
    }
    //cout<<cnt<<endl;
    if(cnt == (a+b) && s[a]=='-') cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}