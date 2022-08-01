#include <bits/stdc++.h>
using namespace std;


void bfs(vector<int>adj[],int source,vector<bool>&visited){
    queue<int>trav;
    trav.push(source);
    visited[source]=true;
    while(!trav.empty()){
        source=trav.front();
        vector<int>::iterator itr;
        for(itr=adj[source].begin();itr!=adj[source].end();itr++){
        
            if(visited[*itr]==false){
                trav.push(*itr);
                visited[*itr]=true;
            }
        }    
        
        cout<<source<<" ";
        trav.pop();
    }
}
int main(){

    int V,E;

    cin >> V >> E;
    vector<int>adj[V];

    for(int i=0; i<E; i++){

        int v1,v2;
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);


    }
    
    vector<bool>visited(V+1,false);
    bfs(adj,0,visited);
}
