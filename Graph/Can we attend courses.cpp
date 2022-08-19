//BASICALLY CHECK CYCLE


bool dfs(vector<vector<int>>& graph, vector<bool> & visited,vector<bool> &rec,  int i){
    if(visited[i]==false){
        visited[i] = true;
        rec[i] = true;
        for(int j=0; j<graph[i].size(); j++){
            if(!visited[graph[i][j]] && dfs(graph, visited, rec, graph[i][j])){
                return true;
            }else if(rec[graph[i][j]]){
                return true;
            }
        }
    }
    rec[i] = false;
    return false;
}


bool canFinish(int n, vector<vector<int>>& pre) {
    
    vector<vector<int>> graph(n, vector<int>());
    for(int i=0; i<pre.size(); i++){
        graph[pre[i][1]].push_back(pre[i][0]);
    }
    
    vector<bool> visited(n, false);
    vector<bool> rec(n, false);
    for(int i=0; i<n; i++){
        if(dfs(graph, visited,  rec, i)){
            return false;
        }
    }
    return true;
}
