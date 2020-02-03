#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int dp[1000001];
    int X;
    cin >> X;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i = 4; i <= X; i++){
        dp[i] = 1 + dp[i-1];    //아래에서 최솟값을 사용하기 위하여 먼저 처리
        if((i % 3) == 0)
            dp[i] = min(dp[i], 1 + dp[i/3]);    //min으로 최솟값 찾는 것이 point
        if((i % 2) == 0)
            dp[i] = min(dp[i], 1 + dp[i/2]);    //else if 가 아니고 if로 처리
    }
   
    cout << dp[X] << '\n';
    return 0;
}


