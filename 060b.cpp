#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int t[210000];
int main(){
      int n;
      long long int T; cin>>n>>T;
      for(int i=0;i<n;i++) cin>>t[i];

      long long int current_time = 0;
      long long int imaginary = 0;
      for(int i=0;i<n;i++){
        if(current_time)
        current_time = t[i];
        imaginary = imaginary + T;
        if(current_time<imaginary) current_time = current_time + T;

      }

}


