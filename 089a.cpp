#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int n; cin>>n;

    int cnt=0;
    while(n>5 || n==3){
        n=n-3;
        cnt++;
    }
    if(n==5 || n==4){
        cout<<cnt+1<<endl;
        return 0;
    }

    cout<<cnt<<endl;

  
}

    


    
