//
//  main.cpp
//  Baekjoon2606(바이러스)
//
//  Created by 고상원 on 2020/02/25.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> v[101];
int visited[101] = {0};
int cnt;

void dfs(int x){
    if(visited[x]) return;
    visited[x] = 1;
    cnt++;
    for(int i = 0; i < v[x].size(); i++){
        int y = v[x][i];
        dfs(y);
    }
}

int main(int argc, const char * argv[]) {
    int N, M;
    int a, b;
    
    cin >> N >> M;
    
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    dfs(1);
    cout << cnt - 1 << '\n';
    
    return 0;
}
