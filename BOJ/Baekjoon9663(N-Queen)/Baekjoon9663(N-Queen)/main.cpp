//
//  main.cpp
//  Baekjoon9663(N-Queen)
//
//  Created by 고상원 on 2020/03/27.
//  Copyright © 2020 고상원. All rights reserved.
//

//백트래킹
#include <iostream>
using namespace std;
int queen[16];
int N;
int cnt = 0;
bool NQueen_Promising(int q[], int N, int row) {
    if (row < 1) return true;
    for (int i = 0; i < row; i++) {
        if (q[row] == q[i] || row - i == abs(q[row] - q[i]))//q[row]는 row행에 위치해있는 곳
            return false;
    }
    return true;
}

void NQueen(int q[], int N, int row = -1) {//row는 빈 노드
    if (NQueen_Promising(q, N, row)) {
        if (row == N - 1) {//퀸들을 다 놓았다면
            cnt++;
        }
        else {
            for (int i = 0; i < N; i++) {
                q[row + 1] = i;
                NQueen(q, N, row + 1);
            }
        }
    }
}

int main(void) {
    cin >> N;
    for (int i = 0; i < N; i++) {
        queen[0] = i;
        NQueen(queen, N, 0);

    }
    cout << cnt;
    return 0;
}
