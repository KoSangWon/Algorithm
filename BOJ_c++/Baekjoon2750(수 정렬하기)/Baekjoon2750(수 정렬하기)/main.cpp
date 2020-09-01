//
//  main.cpp
//  Baekjoon2750(수 정렬하기)
//
//  Created by 고상원 on 2020/01/28.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    int arr[1001];
    int index = 0;
    int min, temp;
    
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    
    for(int i = 0; i < N; i++){
        min = 1001;
        for(int j = i; j < N; j++){
            if(min > arr[j]){
                min = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    
    for(int i = 0; i < N; i++)
        cout << arr[i] << '\n';
    
    return 0;
}
