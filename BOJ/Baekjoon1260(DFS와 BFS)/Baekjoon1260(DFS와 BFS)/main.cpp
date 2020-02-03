//
//  main.cpp
//  Baekjoon1260(DFS와 BFS)
//
//  Created by 고상원 on 2020/01/28.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;

int checked[1001];
vector<int> a[1001];

void dfs(int start);
void bfs(int start);

int main(int argc, const char * argv[]) {
    int N, M, V;
    int j, k;
    
    //그래프 생성
    cin >> N >> M >> V;
    for(int i = 0; i < M; i++){
        cin >> j >> k;
        a[j].push_back(k);
        a[k].push_back(j);
    }
    
    //정점이 여러 개인 경우에 작은 번호부터 먼저 방문하기 때문에 정렬해준다.
    for(int i = 1; i <= N; i++){
        sort(a[i].begin(), a[i].end());
    }
    
    dfs(V);
    cout << '\n';
    memset(checked, 0, sizeof(checked));    // #include <cstring>
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
        cout << x << " ";
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
