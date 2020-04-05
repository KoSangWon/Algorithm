//
//  main.cpp
//   1=cute)
//
//  Created by 고상원 on 2020/04/06.
//  Copyright © 2020 고상원. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    int arr[101];
    int oneCnt = 0, zeroCnt = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        if(arr[i] == 1)
            oneCnt++;
        else
            zeroCnt++;
    }
    if(oneCnt < zeroCnt)
        cout << "Junhee is not cute!" << '\n';
    else
        cout << "Junhee is cute!" << '\n';

    return 0;
}
