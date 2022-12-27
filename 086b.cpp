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
    string a,b; cin>>a>>b;
    vector<int> st;
    for(int i=0;i<(int)a.size();i++){
        int x = a[i] - '0';
        st.push_back(x);
    }
    for(int i=0;i<(int)b.size();i++){
        int x = b[i] - '0';
        st.push_back(x);
    }

    int y = st.size();
    int total = 0;
    while(! st.empty()){
        int z = st.front();
        //cout<<z<<endl;
        total = total + z;
        total = total *10;
        //cout<<total<<endl;
        st.erase(st.begin());
    }

    total = total/10;

    for(int i=1;i<=111111;i++){
        if(total == i*i){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}



