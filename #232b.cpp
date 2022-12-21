#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    string t; cin>>t;
    int n = s.size();
    string s2 = s;
    bool hantei = true;
    int k = (t[0] - s[0] +26)%26;
    //cout<<k<<endl;

    for(int i=0;i<n;i++){
        //+'a'で文字に戻してs2[i]へ代入
        cout<<((s2[i] - 'a' + k) %26) + 'a'<<endl;
        s2[i] = ((s2[i] - 'a' + k) %26)+'a';
        cout<<s2[i]<<endl;
    }
    if(s2==t) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}