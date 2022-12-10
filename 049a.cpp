#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

int main(){
    char c; cin>>c;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        cout<<"vowel"<<endl;
    }
    else{
        cout<<"consonant"<<endl;
    }
}
