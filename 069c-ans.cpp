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

#define yes "Yes"
#define no "No"

int n;
int a[200100];

string solve(){
    int c4 = 0;
    int c2 = 0;
    int c = 0;

    for(int i=1;i<=n;i++){
        if(a[i] % 4 == 0) c4++;
        else if(a[i] % 2 == 0) c2++;
        else c++;
    }

    if(c4 + 1 == c && c4 + c == n) return yes;
    if(c4 < c) return no;

    return yes;
}


int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cout<<solve()<<endl;
    
}