#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<random>
#include<time.h>
#include<map>
using namespace std;

int main(){
    unsigned int n,m;
    int new_si;
    int goukei;
    vector<string> koho;

    srand((unsigned int)time(NULL));

    string ans1,ans2;

    map<string,int> score;
    score["小エビのサラダ"] = 350;
    score["チキンのシーザーサラダ"] = 350;
    score["ガーデンサラダ"] = 350;
    score["コーンクリームスープ"] = 150;
    score["白菜のクラムチャウダー"] = 300;
    score["田舎風ミネストローネ"] = 300;
    score["プチフォッカ"] = 150;
    score["セットプチフォッカ"] = 100;
    score["ほうれん草のくたくた"] = 300;
    score["爽やかにんじんサラダ"] = 200;
    score["ペコリーノ・ロマーノ"] = 100;
    score["ビール"] = 400;
    score["シナモンプチフォッカ"] = 200;
    score["ミニフィセル"] = 150;
    score["ガーリックトースト"] = 150;
    score["ブロッコリーのくたくた"] = 300;
    score["柔らか青豆とペコリーノチーズの温サラダ"] = 200;
    score["バッファローモッツァレラ"] = 300;
    score["辛味チキン"] = 300;
    score["カリットポテト"] = 250;
    score["ポップコーンシュリンプ"] = 300;
    score["煉獄のたまご"] = 300;
    score["イタリア風もつ煮込み"] = 350;
    score["エスカルゴのオーブン焼き"] = 400;
    score["アロスティチーニ"] = 400;
    score["チョリソー"] = 400;
    score["ムール貝のガーリック焼き"] = 400;
    score["エビクリームグラタン"] = 400;

    cout<<"あなたにぴったりのサイドメニュー3品をご紹介します.500円以上,1200円以下で金額を設定してね"<<endl;
    cout<<endl;
    cout<<"設定する金額(50の倍数で記入.単位は(円)):";
    cin>>goukei;

    bool hantei = true;
    while(hantei){

    n = rand();
    m = rand();

    n = n % 28;
    m = m % 28;

    while(n == m){
        m = rand();
        m = m % 28;
    }

    //cout<<n<<":"<<m<<endl;

    if(n==0) ans1 = "小エビのサラダ";
    if(n==1) ans1 = "チキンのシーザーサラダ";
    if(n==2) ans1 = "ガーデンサラダ";
    if(n==3) ans1 = "コーンクリームスープ";
    if(n==4) ans1 = "白菜のクラムチャウダー";
    if(n==5) ans1 = "田舎風ミネストローネ";
    if(n==6) ans1 = "プチフォッカ";
    if(n==7) ans1 = "セットプチフォッカ";
    if(n==8) ans1 = "ほうれん草のくたくた";
    if(n==9) ans1 = "爽やかにんじんサラダ";
    if(n==10) ans1 = "ペコリーノ・ロマーノ";
    if(n==11) ans1 = "ビール";
    if(n==12) ans1 = "シナモンプチフォッカ";
    if(n==13) ans1 = "ミニフィセル";
    if(n==14) ans1 = "ガーリックトースト";
    if(n==15) ans1 = "ブロッコリーのくたくた";
    if(n==16) ans1 = "柔らか青豆とペコリーノチーズの温サラダ";
    if(n==17) ans1 = "バッファローモッツァレラ";
    if(n==18) ans1 = "辛味チキン";
    if(n==19) ans1 = "カリットポテト";
    if(n==20) ans1 = "ポップコーンシュリンプ";
    if(n==21) ans1 = "煉獄のたまご";
    if(n==22) ans1 = "イタリア風もつ煮込み";
    if(n==23) ans1 = "エスカルゴのオーブン焼き";
    if(n==24) ans1 = "アロスティチーニ";
    if(n==25) ans1 = "チョリソー";
    if(n==26) ans1 = "ムール貝のガーリック焼き";
    if(n==27) ans1 = "エビクリームグラタン";

    if(m==0) ans2 = "小エビのサラダ";
    if(m==1) ans2 = "チキンのシーザーサラダ";
    if(m==2) ans2 = "ガーデンサラダ";
    if(m==3) ans2 = "コーンクリームスープ";
    if(m==4) ans2 = "白菜のクラムチャウダー";
    if(m==5) ans2 = "田舎風ミネストローネ";
    if(m==6) ans2 = "プチフォッカ";
    if(m==7) ans2 = "セットプチフォッカ";
    if(m==8) ans2 = "ほうれん草のくたくた";
    if(m==9) ans2 = "爽やかにんじんサラダ";
    if(m==10) ans2 = "ペコリーノ・ロマーノ";
    if(m==11) ans2 = "ビール";
    if(m==12) ans2 = "シナモンプチフォッカ";
    if(m==13) ans2 = "ミニフィセル";
    if(m==14) ans2 = "ガーリックトースト";
    if(m==15) ans2 = "ブロッコリーのくたくた";
    if(m==16) ans2 = "柔らか青豆とペコリーノチーズの温サラダ";
    if(m==17) ans2 = "バッファローモッツァレラ";
    if(m==18) ans2 = "辛味チキン";
    if(m==19) ans2 = "カリットポテト";
    if(m==20) ans2 = "ポップコーンシュリンプ";
    if(m==21) ans2 = "煉獄のたまご";
    if(m==22) ans2 = "イタリア風もつ煮込み";
    if(m==23) ans2 = "エスカルゴのオーブン焼き";
    if(m==24) ans2 = "アロスティチーニ";
    if(m==25) ans2 = "チョリソー";
    if(m==26) ans2 = "ムール貝のガーリック焼き";
    if(m==27) ans2 = "エビクリームグラタン";

    //cout<<ans1<<":"<<score[ans1]<<endl;
    //cout<<ans2<<":"<<score[ans2]<<endl;

    int nokori = goukei - score[ans1] - score[ans2];

    //cout<<"残り一品の金額:"<<nokori<<endl;

    int cnt = 0;

    if(nokori == score["小エビのサラダ"] && ans1 != "小エビのサラダ" && ans2 != "小エビのサラダ") koho.push_back("小エビのサラダ"),cnt++;
    if(nokori == score["チキンのシーザーサラダ"] && ans1 != "チキンのシーザーサラダ" && ans2 != "チキンのシーザーサラダ") koho.push_back("チキンのシーザーサラダ"),cnt++;
    if(nokori == score["ガーデンサラダ"] && ans1 != "ガーデンサラダ" && ans2 != "ガーデンサラダ") koho.push_back("ガーデンサラダ"),cnt++;
    if(nokori == score["コーンクリームスープ"] && ans1 != "コーンクリームスープ" && ans2 != "コーンクリームスープ") koho.push_back("コーンクリームスープ"),cnt++;
    if(nokori == score["白菜のクラムチャウダー"] && ans1 != "白菜のクラムチャウダー" && ans2 != "白菜のクラムチャウダー") koho.push_back("白菜のクラムチャウダー"),cnt++;
    if(nokori == score["田舎風ミネストローネ"] && ans1 != "田舎風ミネストローネ" && ans2 != "田舎風ミネストローネ") koho.push_back("田舎風ミネストローネ"),cnt++;
    if(nokori == score["プチフォッカ"] && ans1 != "プチフォッカ" && ans2 != "プチフォッカ") koho.push_back("プチフォッカ"),cnt++;
    if(nokori == score["セットプチフォッカ"] && ans1 != "セットプチフォッカ" && ans2 != "セットプチフォッカ") koho.push_back("セットプチフォッカ"),cnt++;
    if(nokori == score["ほうれん草のくたくた"] && ans1 != "ほうれん草のくたくた" && ans2 != "ほうれん草のくたくた") koho.push_back("ほうれん草のくたくた"),cnt++;
    if(nokori == score["爽やかにんじんサラダ"] && ans1 != "爽やかにんじんサラダ" && ans2 != "爽やかにんじんサラダ") koho.push_back("爽やかにんじんサラダ"),cnt++;
    if(nokori == score["ペコリーノ・ロマーノ"] && ans1 != "ペコリーノ・ロマーノ" && ans2 != "ペコリーノ・ロマーノ") koho.push_back("ペコリーノ・ロマーノ"),cnt++;
    if(nokori == score["ビール"] && ans1 != "ビール" && ans2 != "ビール") koho.push_back("ビール"),cnt++;
    if(nokori == score["シナモンプチフォッカ"] && ans1 != "シナモンプチフォッカ" && ans2 != "シナモンプチフォッカ") koho.push_back("シナモンプチフォッカ"),cnt++;
    if(nokori == score["ミニフィセル"] && ans1 != "ミニフィセル" && ans2 != "ミニフィセル") koho.push_back("ミニフィセル"),cnt++;
    if(nokori == score["ガーリックトースト"] && ans1 != "ガーリックトースト" && ans2 != "ガーリックトースト") koho.push_back("ガーリックトースト"),cnt++;
    if(nokori == score["ブロッコリーのくたくた"] && ans1 != "ブロッコリーのくたくた" && ans2 != "ブロッコリーのくたくた") koho.push_back("ブロッコリーのくたくた"),cnt++;
    if(nokori == score["柔らか青豆とペコリーノチーズの温サラダ"] && ans1 != "柔らか青豆とペコリーノチーズの温サラダ" && ans2 != "柔らか青豆とペコリーノチーズの温サラダ") koho.push_back("柔らか青豆とペコリーノチーズの温サラダ"),cnt++;
    if(nokori == score["バッファローモッツァレラ"] && ans1 != "バッファローモッツァレラ" && ans2 != "バッファローモッツァレラ") koho.push_back("バッファローモッツァレラ"),cnt++;
    if(nokori == score["辛味チキン"] && ans1 != "辛味チキン" && ans2 != "辛味チキン") koho.push_back("辛味チキン"),cnt++;
    if(nokori == score["カリットポテト"] && ans1 != "カリットポテト" && ans2 != "カリットポテト") koho.push_back("カリットポテト"),cnt++;
    if(nokori == score["ポップコーンシュリンプ"] && ans1 != "ポップコーンシュリンプ" && ans2 != "ポップコーンシュリンプ") koho.push_back("ポップコーンシュリンプ"),cnt++;
    if(nokori == score["煉獄のたまご"] && ans1 != "煉獄のたまご" && ans2 != "煉獄のたまご") koho.push_back("煉獄のたまご"),cnt++;
    if(nokori == score["イタリア風もつ煮込み"] && ans1 != "イタリア風もつ煮込み" && ans2 != "イタリア風もつ煮込み") koho.push_back("イタリア風もつ煮込み"),cnt++;
    if(nokori == score["エスカルゴのオーブン焼き"] && ans1 != "エスカルゴのオーブン焼き" && ans2 != "エスカルゴのオーブン焼き") koho.push_back("エスカルゴのオーブン焼き"),cnt++;
    if(nokori == score["アロスティチーニ"] && ans1 != "アロスティチーニ" && ans2 != "アロスティチーニ") koho.push_back("アロスティチーニ"),cnt++;
    if(nokori == score["チョリソー"] && ans1 != "チョリソー" && ans2 != "チョリソー") koho.push_back("チョリソー"),cnt++;
    if(nokori == score["ムール貝のガーリック焼き"] && ans1 != "ムール貝のガーリック焼き" && ans2 != "ムール貝のガーリック焼き") koho.push_back("ムール貝のガーリック焼き"),cnt++;
    if(nokori == score["エビクリームグラタン"] && ans1 != "エビクリームグラタン" && ans2 != "エビクリームグラタン") koho.push_back("エビクリームグラタン"),cnt++;


    //int k = rand();

    int si = koho.size();
    //cout<<si<<endl;
    int zansa = si - cnt;

    koho.resize(koho.size()-zansa);
    new_si = koho.size();
    //cout<<new_si<<endl;

    if(new_si>0) hantei = false;

    }

    vector<string> Q(new_si);
    int num = 0;
    int kiroku = new_si;

    while(kiroku >0){
        string f = koho.front();
        //cout<<f<<endl;
        Q[num] = f;
        num++;
        koho.erase(koho.begin());
        kiroku--;
    }

    for(int i=0;i<new_si;i++){
        //cout<<Q[i]<<endl;
    }

    int z = Q.size();

    int ans_number = rand();

    z = ans_number % z;

    string ans3 = Q[z];

    cout<<endl;
    cout<<"あなたにぴったりのメニューの組み合わせをご紹介しました"<<endl;
    cout<<endl;
    cout<<ans1<<":"<<score[ans1]<<"円"<<endl;
    cout<<ans2<<":"<<score[ans2]<<"円"<<endl;
    cout<<ans3<<":"<<score[ans3]<<"円"<<endl;


}