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

int a[201];

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    int cnt = 0;
    bool hantei = true;
    while(hantei){
        for(int i=0;i<n;i++){
            if((a[i]%2)==0){
                a[i] = a[i]/2;
            }
            else if((a[i]%2)==1){
                hantei = false;
            }
        }
        if(hantei == false) break;
        cnt++;
    }

    cout<<cnt<<endl;

}



