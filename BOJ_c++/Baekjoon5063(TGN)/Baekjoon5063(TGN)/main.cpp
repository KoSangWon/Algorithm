//
//  main.cpp
//  Baekjoon5063(TGN)
//
//  Created by 고상원 on 2020/04/06.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int r, e, c;
        cin >> r >> e >> c;
        if(r < e - c)
            cout << "advertise" << '\n';
        else if(r == e - c)
            cout << "does not matter" << '\n';
        else
            cout << "do not advertise" << '\n';
    }
    return 0;
        
}
