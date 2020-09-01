//
//  main.cpp
//  Baekjoon1966(프린터 큐)
//
//  Created by 고상원 on 2020/02/16.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    int T;
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        int N, M, cnt = 0;
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        
        cin >> N >> M;
        
        for(int j = 0; j < N; j++){
            int val;
            cin >> val;
            q.push({j, val});
            pq.push(val);
        }
        
        while(!q.empty()){
            int nowidx = q.front().first;
            int nowval = q.front().second;
            q.pop();
            
            if(nowval == pq.top()){
                pq.pop();
                cnt++;
                if(nowidx == M){
                    cout << cnt << '\n';
                    break;
                }
            }
            else{
                q.push({nowidx, nowval});
            }
        }
    }
    return 0;
}
