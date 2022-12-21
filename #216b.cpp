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
    int n; cin>>n;
    vector<string> s1(n),s2(n);
    for(int i=0;i<n;i++){
        cin>>s1[i];
        cin>>s2[i];
    }
    bool hantei = false;
    for(int i=0;i<n;i++){
        //二重ループの取り方に注意.
        for(int j=1+i;j<n;j++){
            if(s1[i]==s1[j] && s2[i]==s2[j]){
                hantei = true;
            }
        }
    }
    if(hantei==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}