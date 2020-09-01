//
//  main.cpp
//  Baekjoon1764(듣보잡)
//
//  Created by 고상원 on 2020/02/23.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<string> v;//듣도 못한 사람

bool binarySearch(int low, int high, string name){
    if(low > high)
        return false;
    else{
        int mid = (low + high) / 2;
        if(v[mid] == name)
            return true;
        else if(v[mid] > name)
            return binarySearch(low, mid - 1, name);
        else
            return binarySearch(mid + 1, high, name);
    }
}

int main(int argc, const char * argv[]) {
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        string name;
        cin >> name;
        v.push_back(name);
    }
    
    sort(v.begin(), v.end());
    
    vector<string> result;
    for(int i = 0; i < M; i++){
        string name;
        cin >> name;
        
        //듣도 보도 못한 사람
        if(binarySearch(0, (int)v.size()-1, name))
            result.push_back(name);
    }
    
    sort(result.begin(), result.end());
    
    cout << result.size() << '\n';
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << '\n';
    
    return 0;
}
