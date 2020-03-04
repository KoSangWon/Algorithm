//
//  main.cpp
//  Baekjoon2178(미로 탐색)
//
//  Created by 고상원 on 2020/03/04.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int arr[101][101];
int dist[101][101];
int cnt;
int N, M;
queue<pair<int, int>> q;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

void bfs(int a, int b){
    q.push(make_pair(a, b));
    dist[a][b]++;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx <= 0 || nx > N || ny <= 0 || ny > M) continue;
            if(dist[nx][ny] == 0 && arr[nx][ny] == 1){
                dist[nx][ny] = dist[x][y] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    cin >> N >> M;
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= M; j++)
            scanf("%1d", &arr[i][j]);

    bfs(1,1);
    cout << dist[N][M] << '\n';
    
    return 0;
}
