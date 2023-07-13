int floydWarshall(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    vector<int> distance(n+1, 1e9);
    distance[src] = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];

            if(distance[u] != 1e9 && distance[u] + w < distance[v]){
                distance[v] = distance[u] + w;
            }
        }
    }

    return distance[dest];
}
