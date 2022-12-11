#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;

//12/11 16:50:38 どこが悪いのか分からない.

int main(){
    string s; cin>>s;
    int n = s.size();
    int cnt = 0;
    bool start = false;
    int a_point,z_point;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s[i] == 'A' && start == false){
            a_point = i;
            start = true;
        }
        if(s[i] == 'Z' && start == true){
            bool hantei = true;
            int j = i + 1;
            int count = 0;
            while(hantei){
                
                j++;
            }
            z_point = i + count;
            start = false;
            //if(a_point == 0) a_point = a_point + 1;
            int koho = z_point - a_point + 1;
            ans = max(koho,ans);
        }
    }
    cout<<ans<<endl;
}


