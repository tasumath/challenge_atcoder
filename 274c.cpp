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

int a[220000];

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
 int N; cin>>N;
 //int M=2*N;
 for(int i=1;i<=N;i++){
    cin>>a[i];
 }

 Graph G(2*N+2);
 for(int i=1;i<=N;i++){
    //a[i]=a[i]-1;
    G[a[i]].push_back(2*i);
    G[2*i].push_back(a[i]);
    G[a[i]].push_back(2*i+1);
    G[2*i+1].push_back(a[i]);
 }

 vector<int> dist =BFS(G,1);

 for(int v=1;v<=2*N+1;v++) cout<<dist[v]<<endl;


}

    


    
