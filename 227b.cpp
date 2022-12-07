#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int n; cin>>n;
    int A[21];
    for(int i=1;i<=n;i++) cin>>A[i];

    bool hantei[1001];
    for(int i=1;i<=n;i++) hantei[i] = false;

    for(int a=1;a<=1000;a++){
      for(int b=1;b<=1000;b++){
        int wa = a+b;
        int seki = a*b;
         for(int i=1;i<=n;i++){
           int S = 4*seki + 3*wa;
           int q = A[i];
             if(S == q) hantei[i] = true;
        }
     }
   }

   int cnt=0;
   for(int i=1;i<=n;i++){
    if(hantei[i]==false) cnt++;
   }

   cout<<cnt<<endl; 

}