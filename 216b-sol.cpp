#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    int n; cin>>n;
    vector<string> S(n),T(n);

    for(int i=0;i<n;i++){
        cin>>S[i];
        cin>>T[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(S[i]==S[j] && T[i]==T[j]){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
}