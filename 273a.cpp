#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int func(int n){
    if(n==0) return 1;
    return n*func(n-1);
}

int main(){
    int N; cin>>N;

    cout<<func(N)<<endl;


}


int right=a.size();
int left=0;

for(int i=0;i<N;i++){
while(right-left>1){
    int mid=(right+left)/2;
    if(a[mid]>b[i]) right=mid;
    else left=mid;
}
cout<<a.size()-right<<endl;
right=a.size();
left=0;
}