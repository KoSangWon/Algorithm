//
//  main.cpp
//  Baekjoon2644(촌수계산)
//
//  Created by 고상원 on 2020/07/01.
//  Copyright © 2020 고상원. All rights reserved.
//


//DFS, BFS 복습
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int checked[1001];
vector<int> a[1001];

void dfs(int x);
void bfs(int start);

int main(int argc, const char * argv[]) {
    int N, M, V;
    int j, k;
    
    cin >> N >> M >> V;
    for(int i = 0; i < M; i++){
        cin >> j >> k;
        a[j].push_back(k);
        a[k].push_back(j);
    }
    
    for(int i = 1; i <= N; i++){
        sort(a[i].begin(), a[i].end());
    }
    
    dfs(V);
    cout << '\n';
    memset(checked, 0, sizeof(checked));
    bfs(V);
    cout << '\n';
    
    return 0;
}


void dfs(int x){
    if(checked[x]) return;
    checked[x] = true;
    cout << x << ' ';
    unsigned long size = a[x].size();
    for(int i = 0; i < size; i++){
        int y = a[x][i];
        dfs(y);
    }
}

void bfs(int start){
    queue<int> q;
    q.push(start);
    checked[start] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << ' ';
        unsigned long size = a[x].size();
        
        for(int i = 0; i < size; i++){
            int y = a[x][i];
            if(!checked[y]){
                q.push(y);
                checked[y] = true;
            }
        }
    }
}
