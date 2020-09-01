//
//  main.cpp
//  Baekjoon1167(트리의 지름)
//
//  Created by 고상원 on 2020/03/11.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

#define MAX 100001
vector<pair<int, int>> v[MAX];
queue<int> q;
bool visited[MAX];
int dist[MAX];

void bfs(int start){
    memset(visited, false, sizeof(visited));
    memset(dist, 0, sizeof(dist));
    
    visited[start] = true;
    q.push(start);
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        
        for(int i = 0; i < v[node].size(); i++){
            int next_node = v[node][i].first;
            if(visited[next_node] == false){
                dist[next_node] = dist[node] + v[node][i].second;
                visited[next_node] = true;
                q.push(next_node);
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int V;
    int a, b, w;
    cin >> V;
    for(int i = 0; i < V; i++){
        cin >> a;
        while(1){
            cin >> b;
            if(b == -1)
                break;
            cin >> w;
            v[a].push_back(make_pair(b, w));
        }
    }
    
    bfs(1);
    
    int start = 1;
    for(int i = 2; i <= V; i++){
        if(dist[i] > dist[start])
            start = i;
    }
    
    bfs(start);
    
    int max = 0;
    for(int i = 1; i <= V; i++){
        if(max < dist[i])
            max = dist[i];
    }
    
    cout << max << '\n';
    
    return 0;
}
