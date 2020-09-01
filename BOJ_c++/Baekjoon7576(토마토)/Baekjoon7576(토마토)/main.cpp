//
//  main.cpp
//  Baekjoon7576(토마토)
//
//  Created by 고상원 on 2020/03/01.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int arr[1001][1001];
int M, N;

queue<pair<int, int>> q;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

void bfs(void){
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx <= 0 || nx > N || ny <= 0 || ny > M) continue;
            if(arr[nx][ny] == 0){
                arr[nx][ny] = arr[x][y] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
}




int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> M >> N;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1)
                q.push(make_pair(i, j));
        }
    }
    
    bfs();
    
    int max = 0;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            if(arr[i][j] == 0){
                cout << "-1" << '\n';
                return 0;
            }
            
            if(max < arr[i][j])
                max = arr[i][j];
        }
    }
    cout << max - 1 << '\n';
    
    return 0;
}
