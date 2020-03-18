//
//  main.cpp
//  Baekjoon1697(숨바꼭질)
//
//  Created by 고상원 on 2020/03/19.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

const int MAX = 100001;
bool visited[MAX];

int bfs(int N, int K){
    queue<pair<int, int>> q;
    q.push(make_pair(N, 0));
    visited[N] = true;
    
    while(!q.empty()){
        int loc = q.front().first;
        int sec = q.front().second;
        q.pop();
        
        if (loc == K) {
            return sec;
        }
        
        if(loc + 1 < MAX && !visited[loc + 1]){
            visited[loc + 1] = true;
            q.push(make_pair(loc + 1, sec + 1));
        }
        if(loc - 1 >= 0 && !visited[loc - 1]){
            visited[loc - 1] = true;
            q.push(make_pair(loc - 1, sec + 1));
        }
        if(loc * 2 < MAX && !visited[loc * 2]){
            visited[loc * 2] = true;
            q.push(make_pair(loc * 2, sec + 1));
        }
    }
    return 100000;
}

int main(int argc, const char * argv[]) {
    int N, K;
    cin >> N >> K;
    
    cout << bfs(N, K) << '\n';
    
    
    return 0;
}
