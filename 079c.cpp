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

int main(){
    string s; cin>>s;
    int i;
    for(int bit = 0; bit < (1<<3); bit++){
        int sum = s[0] - '0';
        for(i=1;i<=3;i++){
            if(bit & (1<<(i-1))){
                sum = sum + (s[i] - '0');
            }
            else{
                sum = sum - (s[i] - '0');
            }
        }
        if(sum == 7){
            int bit_check = bit;
            cout<<s[0];
            for(int i=1;i<=3;i++){
                if(bit_check & (1<<(i-1))){
                    cout<<"+"<<s[i];
                }
                else{
                    cout<<"-"<<s[i];
                }
            }
            cout<<"=7"<<endl;
            return 0;
        }
    }
}