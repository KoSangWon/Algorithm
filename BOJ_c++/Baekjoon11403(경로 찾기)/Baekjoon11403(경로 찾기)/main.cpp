//
//  main.cpp
//  Baekjoon11403(경로 찾기)
//
//  Created by 고상원 on 2020/02/24.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int N;
vector<int> v[101];
int visited[101] = {0};

void dfs(int x){
    for(int i = 0; i < N; i++){
        if(v[x][i] && !visited[i]){
            visited[i]++;
            dfs(i);
        }
    }
}

int main(int argc, const char * argv[]) {
    cin >> N;
    int num;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> num;
            v[i].push_back(num);
        }
    }
    
    for(int i = 0; i < N; i++){
        memset(visited, 0, sizeof(visited));
        dfs(i);
        
        for(int j = 0; j < N; j++){
            if(visited[j])
                v[i][j] = 1;
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
    
    
    
    return 0;
}
