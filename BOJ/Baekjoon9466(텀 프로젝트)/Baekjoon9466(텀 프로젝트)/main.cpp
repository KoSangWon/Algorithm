//
//  main.cpp
//  Baekjoon9466(텀 프로젝트)
//
//  Created by 고상원 on 2020/02/09.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int connect[100001];//화살표가 한방향으로 가기때문에 vector대신 배열 사용가능
bool done[100001];
bool visited[100001];
int T, n, cnt;

void dfs(int x){
    visited[x] = true;
    int y = connect[x];
    if(!visited[y])
        dfs(y);
    else{
        if(!done[y]){
            for(int i = y; i != x; i = connect[i]){//
                cnt++;//연결된 점들 개수 세기
            }
            cnt++;//자기 자신
        }
    }
    done[x] = true;
}

int main(int argc, const char * argv[]) {
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> n;
        
        cnt = 0;
        memset(connect, 0, sizeof(connect));
        memset(done, false, sizeof(done));
        memset(visited, false, sizeof(visited));
        
        for(int j = 1; j <= n; j++){
            cin >> connect[j];
        }
        for(int j = 1; j <= n; j++){
            if(!visited[j])
                dfs(j);
        }
        
        cout << n - cnt << '\n';
    }
    return 0;
}


