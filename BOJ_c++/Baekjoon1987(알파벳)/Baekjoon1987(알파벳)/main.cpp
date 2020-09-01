//
//  main.cpp
//  Baekjoon1987(알파벳)
//
//  Created by 고상원 on 2020/03/29.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

char arr[21][21];
bool visitedAlpha[26];//A~Z
int R, C;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int dfs(int x, int y, int check){
    visitedAlpha[check-'A'] = true;
    
    int cnt = 0;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
        
        int next = arr[nx][ny];
        if(!visitedAlpha[next-'A']){
            visitedAlpha[next-'A'] = true;
            cnt = max(cnt, dfs(nx, ny, next));
            visitedAlpha[next-'A'] = false;
        }
    }
    return cnt + 1;
}

int main(int argc, const char * argv[]) {
    cin >> R >> C;
    
    for(int i = 0; i < R; i++){
        string s;
        cin >> s;
        for(int j = 0; j < s.length(); j++){
            arr[i][j] = s[j];
        }
    }
   
    cout << dfs(0, 0, arr[0][0]) << '\n';
    
    return 0;
}
