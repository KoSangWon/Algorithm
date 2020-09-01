//
//  main.cpp
//  Baekjoon1707(이분 그래프)
//
//  Created by 고상원 on 2020/01/31.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> connect[20001];
int nodeColor[20001];
int K, V, E;

void dfs(int nodeNum, int color);
bool isBipartite(void);

int main(int argc, const char * argv[]) {
    int a, b;
    
    cin >> K;
    
    for(int i = 0; i < K; i++){
        for (int j = 1; j < 20001; j++)
            connect[j].clear(); // 케이스마다 초기화시켜줘야 함
        memset(nodeColor, 0, sizeof(nodeColor)); //케이스마다 초기화시켜줘야 함
        
        cin >> V >> E;
        for(int j = 0; j < E; j++){
            cin >> a >> b;
            connect[a].push_back(b);
            connect[b].push_back(a);
        }
        
        for(int j = 1; j <= V; j++){
            if(nodeColor[j] == 0)
                dfs(j, 1); // 1번 색깔부터 시작
        }
        
        if(isBipartite())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    
    return 0;
}

//color 가 0 이면 아직 방문하지 않은 것이고 1, 2 를 각 색깔로 둔다.
void dfs(int nodeNum, int color){
    nodeColor[nodeNum] = color;
    unsigned long int size = connect[nodeNum].size();
    for(unsigned long int i = 0; i < size; i++){
        int next = connect[nodeNum][i];
        if(!nodeColor[next])
            dfs(next, 3 - color);
    }
}

bool isBipartite(void){
    for(int i = 1; i <= V; i++){
        unsigned long int size = connect[i].size();
        for(unsigned long int j = 0; j < size; j++){
            int next = connect[i][j];
            if(nodeColor[i] == nodeColor[next])
                return false;
        }
    }
    return true;
}
