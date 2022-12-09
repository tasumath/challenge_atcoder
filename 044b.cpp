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

    int alphabet[27];
    for(int i=1;i<=26;i++) alphabet[i] = 0;

    for(int i=0;i<n;i++){
        int f = s[i] - 'a';
        f = f + 1;
        //cout<<f<<endl;
        alphabet[f] = alphabet[f] + 1;
    }

    bool hantei = true;
    for(int i=1;i<=26;i++){
        if(alphabet[i] % 2 == 1) hantei = false;
    }

    if(hantei) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}
