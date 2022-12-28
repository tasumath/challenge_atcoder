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
    int a,b,k; cin>>a>>b>>k;
    vector<int> p;
    for(int i=a;i<=b;i++){
        if(i - a < k) p.push_back(i);
        if(b - i <k) p.push_back(i);
    }
    int koho = -1;
    while(!p.empty()){
        int x = p.front();
        if(koho == x){
            p.erase(p.begin());
            continue;
        }
        cout<<x;
        p.erase(p.begin());
        cout<<endl;
        koho = x;
    }
}