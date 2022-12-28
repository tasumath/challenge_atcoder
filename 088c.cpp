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

int c[3][3];
int a[3],b[3];

int main(){
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cin>>c[i][j];
        }
    }

    for(int a1=0;a1<=101;a1++){
        for(int a2=0;a2<=101;a2++){
            for(int a3=0;a3<=101;a3++){
                int b1 = c[0][0] - a1;
                int b2 = c[0][1] - a1;
                int b3 = c[0][2] - a1;

                a[0] = a1;
                a[1] = a2;
                a[2] = a3;
                b[0] = b1;
                b[1] = b2;
                b[2] = b3;

                int ok = 1;
                for(int l=0;l<=2;l++){
                    for(int m=0;m<=2;m++){
                        if(a[l] + b[m] != c[l][m]) ok = 0;
                    }
                }
                if(ok){
                    printf("Yes\n");
                    return 0;
                }
            }
        }
    }

    printf("No\n");
    
}