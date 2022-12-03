#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<map>
#include<string>
using namespace std;



int main(){
    int n,m; cin>>n>>m;
    vector<vector<bool>> chk(n,vector<bool>(n,false));
  for(int i=0;i<m;i++){
    int k; cin>>k;
    vector<int> a(k);
    for(int j=0;j<k;j++){
        cin>>a[j];
        a[j]=a[j]-1;
    }
    for(int p=0;p<a.size();p++){
        for(int q=p+1;q<(int)a.size();q++){
            chk[a[p]][a[q]]=true;
        }
    }
}

bool hantei=true;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(chk[i][j] == false){
            cout<<"No"<<endl;
            return 0;
        }
    }
}

cout<<"Yes"<<endl;

}
