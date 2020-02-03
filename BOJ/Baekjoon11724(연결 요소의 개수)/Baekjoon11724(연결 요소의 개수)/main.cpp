//
//  main.cpp
//  Baekjoon11724(연결 요소의 개수)
//
//  Created by 고상원 on 2020/01/28.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int checked[1001] = {0};
vector<int> a[1001];

void dfs(int x);
void bfs(int start);

int main(int argc, const char * argv[]) {
    int N, M;
    int u, v;
    int count = 0;
    
    cin >> N >> M;
    
    for(int i = 0; i < M; i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    
    for(int i = 1; i <= N; i++){
        if(!checked[i]){
            bfs(i); //or dfs(i);
            count++;
        }
    }
    cout << count << '\n';
    
    return 0;
}

void dfs(int x){
    if(checked[x]) return;
    checked[x] = true;
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
