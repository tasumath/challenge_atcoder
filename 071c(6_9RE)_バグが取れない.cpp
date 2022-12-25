#include<bits/stdc++.h>
using namespace std;

long long int a[220000];
long long int cnt[220000];

int main(){
    long long int n; cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    map<long long int,long long int> Map;
    for(int i=0;i<n;i++){
        Map[a[i]] = Map[a[i]] + 1;
    }

    //長方形の最大値
    vector<long long int> t;
    for(int i=0;i<n;i++){
        long long int x = a[i];
        if(Map[x]>=2 && cnt[x]==0){
            t.push_back(x);
            cnt[x] = cnt[x] + 1;
        }  
    }

    long long int rize = t.size();
    long long int retangle = 0;
    //cout<<rize<<endl;
    
    if(rize>=2){
    sort(t.rbegin(),t.rend());
    retangle = 1LL * t[0] * t[1];
    //cout<<retangle<<endl;
    }
    else{
    retangle = 0;
    }

    //初期化
    for(int i=0;i<n;i++){
        long long int x = a[i];
        cnt[x] = 0;  
    }

    //正方形の面積
    vector<long long int> s;
    long long int through = 0;
    for(int i=0;i<n;i++){
        long long int x = a[i];
        if(Map[x]>=4 && cnt[x]==0){
            s.push_back(x);
            cnt[x] = cnt[x] + 1;
            through = through + 1;  
        }
    }


    long long int size = s.size();
    long long int square = 0;

    if(size>=1 && through>0){
    sort(s.rbegin(),s.rend());
    square = 1LL * s[0] * s[0];
    }
    else{
        square = 0;
    }

    if(retangle==0 && square==0){
        cout<<0<<endl;
        return 0;
    }

    long long int ans = max(retangle,square);
    cout<<ans<<endl;
    return 0;

}