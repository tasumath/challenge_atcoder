#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int n = s.size();

    sort(s.begin(),s.end());
    
    int cnt[26];
    for(int i=0;i<26;i++) cnt[i] = 0;

    for(int i=0;i<n;i++){
        int x = s[i] - 'a';
        //cout<<x<<endl;
        cnt[x] = cnt[x] + 1;
    }

    int point = 30;  
    for(int i=0;i<26;i++){
        if(cnt[i]==0){
            point = i;
            break;
        }
    }

    if(point == 30) cout<<"None"<<endl;
    else{
        char ans = point + 'a';
        cout<<ans<<endl;
    }

}