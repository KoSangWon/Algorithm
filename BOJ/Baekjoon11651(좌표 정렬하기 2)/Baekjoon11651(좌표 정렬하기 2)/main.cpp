//
//  main.cpp
//  Baekjoon11651(좌표 정렬하기 2)
//
//  Created by 고상원 on 2020/03/09.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, int> P;

int N;
vector<P> v;

bool comp(P a, P b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
    
}

int main(int argc, const char * argv[]) {
    cin >> N;
    int x, y;
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), comp);
    
    for(int i = 0; i < N; i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
    return 0;
}
