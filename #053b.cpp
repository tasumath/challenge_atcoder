#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int n = s.size();
    int a_pos=0,z_pos=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a_pos=i;
            break;
        }
    }
    //cout<<s[n-1]<<endl;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='Z'){
            z_pos=i;
            break;
        }
    }
    
    int ans = 0;
    //cout<<"a_pos:"<<a_pos<<endl;
    //cout<<"z_pos:"<<z_pos<<endl;
    ans = (z_pos - a_pos) + 1;

    cout<<ans<<endl; 
}