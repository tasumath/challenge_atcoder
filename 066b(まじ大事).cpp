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
    //cout<<n<<endl;
    int ans = 0;
    for(int i=2;i<n-1;i++){
        cout<<"i:"<<i<<endl;
        if(i%2==0){
            //st.substr(開始位置,取り出す長さ)
            string a = st.substr(0,i/2);
            string b = st.substr(i/2,i/2);
            //cout<<"a:"<<a<<endl;
            ////cout<<"b:"<<b<<endl;
            if(a==b) ans = max(ans,i);
        }
    }
    cout<<ans<<endl;
    return 0;
    
}