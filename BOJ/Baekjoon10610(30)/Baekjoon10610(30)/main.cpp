//
//  main.cpp
//  Baekjoon10610(30)
//
//  Created by 고상원 on 2020/02/08.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> arr;
    string N;
    int ans = 0;
    int sum = 0;
    
    cin >> N;
    for(int i = 0; i < N.length(); i++)
        arr.push_back(N[i]-'0');
    
    int size = arr.size();
    if(find(arr.begin(), arr.end(), 0) != arr.end()){
        for(int i = 0; i < size; i++){
            sum += arr[i];
        }
        if(sum % 3 == 0){
            sort(arr.begin(), arr.end(), greater<int>());//내림차순 정렬
            for(int i = 0; i < size; i++){
                cout << arr[i];
            }
            cout << '\n';
            return 0;
        }
        else
            ans = -1;
    }
    else
        ans = -1;
    
    cout << ans << '\n';
    return 0;
}

