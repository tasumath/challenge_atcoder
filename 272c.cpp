#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int a[110];

int main(){
    int N; cin>>N;

    for(int i=0;i<N;i++) cin>>a[i];


int sum=0;
for(int i=0;i<N;i++){
    sum=sum+a[i];
} 

cout<<sum<<endl;

}