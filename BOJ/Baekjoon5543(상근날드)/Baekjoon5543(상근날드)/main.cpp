//
//  main.cpp
//  Baekjoon5543(상근날드)
//
//  Created by 고상원 on 2020/04/06.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[5];
    for(int i = 0; i < 5; i++)
        cin >> arr[i];
    
    int min = 2000;
    for(int i = 0; i < 3; i++){
        for(int j = 3; j < 5; j++){
            if(min > arr[i] + arr[j] - 50){
                min = arr[i] + arr[j] - 50;
            }
        }
    }
    cout << min << '\n';
    return 0;
}
