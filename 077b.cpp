#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin>>n;
    long long int x = 1;
    int i=0;
    bool hantei = true;
    while(hantei){
        int y = x*x;
        if(n<y) hantei = false;
        x++;
    }
    x = x - 2;
    //cout<<x<<endl;
    cout<<x*x<<endl;
}