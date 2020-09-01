//
//  main.cpp
//  Baekjoon15953(상금 헌터)
//
//  Created by 고상원 on 2020/02/17.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int T;
    int a = 0;
    int b = 0;
    int rank = 1;
    int firstReward[6] = {500, 300, 200, 50, 30, 10};
    int firstGet = 0;
    int secondReward[5] = {512, 256, 128, 64, 32};
    int secondGet = 0;
    //vector<int> v[8];
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> a >> b;
        rank = 1;
        firstGet = 0;
        for(int j = 1; j <= 6; j++){
            for(int k = 1; k <= j; k++){
                //v[j].push_back(rank);
                if(a == rank){
                    firstGet = firstReward[j-1];
                }
                rank++;
            }
        }
        
        rank = 1;
        secondGet = 0;
        for(int j = 0; j <= 4; j++){
            for(int k = 1; k <= pow(2,j); k++){
                //v[j].push_back(rank);
                if(b == rank){
                    secondGet = secondReward[j];
                }
                rank++;
            }
        }
        
        cout << (firstGet + secondGet) * 10000 << '\n';
    }
    
    
    return 0;
}
