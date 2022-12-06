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

//重要なのはbase_fとbase_gの差分を求め,26を足すこと.そこから26で割った余りを
//求めること.kが非負整数という条件に気を付ける.g-fでもf-gでもオッケー.

int main(){
    string s; cin>>s;
    string t; cin>>t;
    //tのi文字目t[i]を何文字後ろに後退させるとs[i]と一致させられる?
    //アルファベットを番号化a=0,z=25
    int base_f = ((s[0]-'a'))%26;
    int base_g = ((t[0]-'a'))%26;
    int k = (base_f-base_g+26)%26;

    bool ans=true;

    for(int i=1;i<(int)s.size();i++){
        int f = (s[i]-'a')%26;
        int g = (t[i]-'a')%26;
        int han = (f-g+26)%26;
        if(han != k) ans=false;
    }

    if(ans) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    

}