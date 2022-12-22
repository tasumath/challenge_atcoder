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

using Graph = vector<vector<int>>;

//int a[220000];

vector<int> BFS(const Graph &G,int s){
    int n=(int)G.size();
    //cout<<n<<endl;
    vector<int> dist(n,-1);
    queue<int> que;
    dist[s]=0;
    que.push(s);

    while(!que.empty()){
        int v=que.front();
        que.pop();

        for(int y : G[v]){
            if(dist[y]!=-1) continue;
            dist[y]=dist[v]+1;
            que.push(y);
        }
    }
    return dist;
}


int main(){
 int n,m; cin>>n>>m;

 Graph G(n+1);
 for(int i=1;i<=m;i++){
    int a; cin>>a;
    int b; cin>>b;
    G[a].push_back(b);
    G[b].push_back(a);    
 }

 vector<int> dist = BFS(G,1);

 if(dist[n]==2) cout<<"POSSIBLE"<<endl;
 else cout<<"IMPOSSIBLE"<<endl;

}


