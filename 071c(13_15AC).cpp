#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin>>n;
    vector<long long int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.rbegin(),a.rend());
    
    long long int tate = 0;
    long long int cnt_h=0,cnt_w=0;
    long long int kaburi = 0;

    for(int i=0;i<n;i++){
        if(tate != a[i] && cnt_h == 0){
            tate = a[i];
            cnt_h ++;
            continue;
        }

        if(tate == a[i] && cnt_h == 1){
            cnt_h ++;
            kaburi = a[i];
            break;
        }
        
        cnt_h = 0;
        tate = 0;
    }

    long long int yoko = 0;
    long long int koho2 = 0;
    for(int i=0;i<n;i++){
        if(yoko != a[i] && cnt_w == 0 && kaburi != a[i]){
            yoko = a[i];
            cnt_w ++;
            continue;
        }
        if(yoko == a[i] && cnt_w == 1 && kaburi != a[i]){
            cnt_w ++;
            koho2 = tate*yoko;
            break;
        }
        
        cnt_w = 0;
        yoko = 0;
        
    }
    //cout<<"koho2:"<<koho2<<endl;

    long long int koho1 = 0;
    cnt_w = 0;
    yoko = 0;

        for(int i=0;i<n;i++){
          if(yoko != a[i] && cnt_w == 0){
            yoko = a[i];
            cnt_w ++;
            continue;
          }
          if(yoko == a[i] && cnt_w == 1){
            cnt_w ++;
            continue;
          }
          if(yoko == a[i] && cnt_w == 2){
            cnt_w ++;
            continue;
          }
          if(yoko == a[i] && cnt_w == 3){
            cnt_w ++;
            koho1 = yoko*yoko;
            break;
          }
          cnt_w = 0;
          yoko = 0;
        }

        if(koho1>koho2) cout<<koho1<<endl;
        else cout<<koho2<<endl;

}

//ansを作り掛け算をしたが,WAの数が減らずに上手くいかない.
//長方形が正方形の定義を内包している?→WAを2個まで減らせた.