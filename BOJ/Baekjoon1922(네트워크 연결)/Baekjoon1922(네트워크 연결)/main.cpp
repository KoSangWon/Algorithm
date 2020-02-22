//
//  main.cpp
//  Baekjoon1922(네트워크 연결)
//
//  Created by 고상원 on 2020/02/23.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int parent[1001];

struct edge{
    int u, v, weight;
    edge(int u, int v, int weight){
        this->u = u;
        this->v = v;
        this->weight = weight;
    }
};

int find(int u){
    if(u == parent[u])
        return u;
    return parent[u] = find(parent[u]);
}

void merge(int u, int v){
    u = find(u);
    v = find(v);
    
    parent[u] = v;
}

int comp(edge &a, edge &b){
    return a.weight < b.weight;
}

int main(int argc, const char * argv[]) {
    int N, M;
    vector<edge> v;
    
    cin >> N >> M;
    for(int i = 1; i <= N; i++)
        parent[i] = i;
    
    int a, b, c;
    for(int i = 0; i < M; i++){
        cin >> a >> b >> c;
        v.push_back(edge(a, b, c));
    }
    
    sort(v.begin(), v.end(), comp);
    
    int ans = 0;
    for(int i = 0; i < M; i++){
        if(find(v[i].u) != find(v[i].v)){
            merge(v[i].u, v[i].v);
            ans += v[i].weight;
        }
    }
    cout << ans << '\n';
    return 0;
}
