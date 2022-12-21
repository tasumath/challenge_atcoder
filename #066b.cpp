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
    string st;
    cin>>st;
    int n = st.size();
    int ans = 0;
    for(int i=2;i<n-1;i++){
        if(i%2==0){
            string s; s = st.substr(0,i/2);
            string t; t = st.substr(i/2,i/2);
            if(s==t) ans = max(ans,i);
        }
    }

    cout<<ans<<endl;
    
}