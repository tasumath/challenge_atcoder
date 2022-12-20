#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s.rbegin(),s.rend());
    
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = s[i] + sum;
        //cout<<sum<<endl;
    }


    /*/
    for(int i=n-1;i>=0;i--){
        if(sum%10 != 0){
            cout<<sum<<endl;
            return 0;
        }
        //cout<<s[i];
        sum = sum - s[i];
        if(sum==0){
            cout<<sum<<endl;
        }
    }
    /*/

    int j = n-1; 
    while(sum % 10 == 0){
        sum = sum - s[j];
        j--;
        
        //if(sum%10 != 0) break;

        if(j == -1){
            cout<<0<<endl;
            return 0;
        }
    }

        cout<<sum<<endl;
        return 0;
}