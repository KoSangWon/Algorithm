//
//  main.cpp
//  Baekjoon10451(순열 사이클)
//
//  Created by 고상원 on 2020/02/02.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> graph[1001];
int arr[1001];
int visited[1001] = {0};

void dfs(int x);
void bfs(int start);

int main(int argc, const char * argv[]) {
    int T, N;
    int count;
    
    cin >> T;
    for(int i = 0; i < T; i++){
        count = 0;
        cin >> N;
        
        for(int j = 1; j <= N; j++)
            graph[j].clear();
        memset(visited, 0, sizeof(visited));
        
        for(int j = 1; j <= N; j++){
            cin >> arr[j];
            graph[j].push_back(arr[j]);
        }
        
        for(int j = 1; j <= N; j++){
            if(!visited[j]){
                dfs(j);
                count++;
            }
        }
        cout << count << '\n';
    }
    
    return 0;
}

void dfs(int x){
    if(visited[x]) return;
    visited[x] = true;
    unsigned long int size = graph[x].size();
    for(int i = 0; i < size; i++){
        int y = graph[x][i];
        dfs(y);
    }
}
