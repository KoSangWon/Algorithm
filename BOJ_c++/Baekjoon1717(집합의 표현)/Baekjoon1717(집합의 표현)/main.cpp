//
//  main.cpp
//  Baekjoon1717(집합의 표현)
//
//  Created by 고상원 on 2020/02/26.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int parent[1000001];

int find(int x){
    if(parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void merge(int u, int v){
    u = find(u);
    v = find(v);
    if(u != v)
        parent[u] = v;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i <= n; i++)
        parent[i] = i;
    
    for(int i = 0; i < m; i++){
        int num, a, b;
        cin >> num >> a >> b;
        
        if(num == 0){
            merge(a, b);
        }
        else if(num == 1){
            if(find(a) == find(b))
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
    
    return 0;
}
