//
//  main.cpp
//  Baekjoon11725(트리의 부모 찾기)
//
//  Created by 고상원 on 2020/03/11.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

#define MAX 100001

vector<int> v[MAX];
int parent[MAX];
bool visited[MAX];
int N;

void findParent(int x){
    visited[x] = true;
    for(int i = 0; i < v[x].size(); i++){
        int next = v[x][i];
        if(visited[next] == false){
            parent[next] = x;
            findParent(next);
        }
    }
}

int main(int argc, const char * argv[]) {
    cin >> N;
    int a, b;
    for(int i = 1; i < N; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    findParent(1);
    
    for(int i = 2; i <= N; i++)
        cout << parent[i] << '\n';
    
    return 0;
}
