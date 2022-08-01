#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>adj[], vector<bool>&visited,int src){
    cout << src <<" ";
    visited[src] = true;

    vector<int>::iterator itr;

    for(itr = adj[src].begin(); itr!= adj[src].end(); itr++){

        if(!visited[*itr]){
            dfs(adj, visited, *itr);
        }
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
    dfs(adj,visited,0);
}
