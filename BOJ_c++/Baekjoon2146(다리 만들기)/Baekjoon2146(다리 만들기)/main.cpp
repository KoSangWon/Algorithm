//
//  main.cpp
//  Baekjoon2146(다리 만들기)
//
//  Created by 고상원 on 2020/03/09.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

const int INF = 987654321;
int N;
int map[101][101];
bool visited[101][101];
int landNum = 1;
queue<pair<int, int>> q;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y){
    visited[x][y] = true;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        map[nx][ny] = landNum;
        
        if(nx <= 0 || nx > N || ny <= 0 || ny > N) continue;
        if(map[nx][ny] == 1 && visited[nx][ny] == false)
            dfs(nx, ny);
    }
}

int bfs(int land){
    while(!q.empty())
        q.pop();
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            if(map[i][j] == land){
                visited[i][j] = true;
                q.push(make_pair(i, j));
            }
        }
    }
    
    int result = 0;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx <= 0 || nx > N || ny <= 0 || ny > N) continue;
            if(map[nx][ny] && map[nx][ny] != land)
                return result;
            else if(map[nx][ny] == 0 && visited[nx][ny] == false){
                visited[nx][ny] = true;
                q.push(make_pair(nx, ny));
            }
        }
        result++;
    }
}

int main(int argc, const char * argv[]) {
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> map[i][j];
        }
    }
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            if(map[i][j] == 1 && visited[i][j] == false){
                dfs(i, j);
                landNum++;
            }
        }
    }
    
    int cnt = INF;
    for(int i = 1; i < landNum; i++){
        memset(visited, false, sizeof(visited));
        cnt = min(cnt, result);
    }
    cout << cnt << '\n';
    
    return 0;
}
