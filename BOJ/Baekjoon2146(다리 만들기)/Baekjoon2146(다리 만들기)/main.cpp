//
//  main.cpp
//  Baekjoon2146(다리 만들기)
//
//  Created by 고상원 on 2020/03/09.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int N;
int map[101][101];
queue<pair<int, int>> q;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(void){
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx <= 0 || nx > N || ny <= 0 || ny > N) continue;
            if(map[nx][ny] == 0){
                map[nx][ny] = map[x][y] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> map[i][j];
            if(map[i][j] == 1)
                q.push(make_pair(i, j));
        }
    }
    
    bfs();
    
    
    
    return 0;
}
