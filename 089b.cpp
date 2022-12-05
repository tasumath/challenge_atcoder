#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
  int N; cin>>N;
int pcount=0;
int wcount=0;
int gcount=0;
int ycount=0;

//単に一文字の格納ならcharを使うこと。
for(int i=0;i<N;i++){
    char S;
    cin>>S;
    if(S=='P') pcount++;
    if(S=='W') wcount++;
    if(S=='G') gcount++;
    if(S=='Y') ycount++;
}

if(pcount>0 && wcount>0 && gcount>0 && ycount>0){
    cout<<"Four"<<endl;
    return 0;
}
if(pcount>0 && wcount>0 && gcount>0){
    cout<<"Three"<<endl;
    return 0;
}
if(pcount>0 && wcount>0 && ycount>0){
    cout<<"Three"<<endl;
    return 0;
}
if(pcount>0 && ycount>0 && gcount>0){
    cout<<"Three"<<endl;
    return 0;
}
if(ycount>0 && wcount>0 && gcount>0){
    cout<<"Three"<<endl;
    return 0;
}

}
