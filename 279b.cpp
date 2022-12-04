#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){

    string S;
    string T;
    cin>>S;
    cin>>T;

    int s=S.size();
    int t=T.size();

    if(s<t){
        cout<<"No"<<endl;
        return 0;
    }

    bool hantei=true;

    for(int i=0;i<s;i++){
        for(int j=0;j<t;j++){
            if(S[i]==T[j]){
                int cnt=1;
                int k=i;
                int l=j;
                while(hantei){
                    if(k+1==s || l+1==t) break;
                    if(S[k+1]==T[l+1]) cnt++;
                    k=k+1;
                    l=l+1;
                }
                if(cnt==t){
                        cout<<"Yes"<<endl;
                        return 0;
                }
            }
        }
    }

    cout<<"No"<<endl;

  
}

    


    
