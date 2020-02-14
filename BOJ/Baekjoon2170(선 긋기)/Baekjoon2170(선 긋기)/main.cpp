//
//  main.cpp
//  Baekjoon2170(선 긋기)
//
//  Created by 고상원 on 2020/02/14.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

typedef pair<int, int> P;
P L[1000001];
int N;
int from, to;
int l, r;
int ans = 0;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> from >> to;
        L[i] = P(from, to);
    }
    sort(L, L+N);
    l = L[0].first;
    r = L[0].second;
    
    for(int i = 1; i < N; i++){
        if(L[i].first > r){//안겹치는 경우
            ans += r-l;
            l = L[i].first;
            r = L[i].second;
        }
        else if(L[i].first < r && L[i].second > r){//겹치는 경우
            r = L[i].second;
        }
    }
    ans += r-l;
    
    cout << ans << '\n';
    
    return 0;
}
