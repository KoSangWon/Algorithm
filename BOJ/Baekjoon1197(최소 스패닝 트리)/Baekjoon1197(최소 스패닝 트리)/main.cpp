//
//  main.cpp
//  Baekjoon1197(최소 스패닝 트리)
//
//  Created by 고상원 on 2020/02/19.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int parent[10001];

//간선을 표현하는 구조체
struct edge{
    int u, v, weight;//u, v는 정점, weight는 가중치
    edge(int u, int v, int weight){
        this -> u = u;
        this -> v = v;
        this -> weight = weight;
    }
};

//루트 찾는 함수
int find(int u){
    //현재 노드가 집합의 루트라면
    //자신이 속한 집합을 찾았으므로 node 반환
    if(u == parent[u])
        return u;
    
    //현재 노드가 집합의 루트가 아니라면
    //노드의 루트에 대해 재귀 호출하면서 parent[u] 업데이트
    return parent[u] = find(parent[u]);
}

//집합을 합치는 함수
void merge(int u, int v){
    u = find(u);
    v = find(v);
    
    parent[v] = u;
}

int compare_comp(edge &a, edge &b){
    return a.weight < b.weight;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<edge> v;
    int V, E;
    long long ans = 0;
    cin >> V >> E;
    
    int A, B, C;
    
    for(int i = 0; i < V; i++)
        parent[i] = i;
    
    for(int i = 0; i < E; i++){
        cin >> A >> B >> C;
        v.push_back(edge(A, B, C));
    }
    
    sort(v.begin(), v.end(), compare_comp);
    for(int i = 0; i < v.size(); i++){
        //같은 집합이 아닌 경우에만 merge
        if(find(v[i].u) != find(v[i].v)){
            merge(v[i].u, v[i].v);
            ans += v[i].weight;
        }
    }
    
    cout << ans << '\n';
    
    return 0;
}
