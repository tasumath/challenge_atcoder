#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    string n; cin>>n;

    int k=n.size();

    for(int i=1;i<k;i++){
        cout<<n[i];
    }
    cout<<endl;

}