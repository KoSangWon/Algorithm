#include <stdio.h>
#include <limits.h>
#include <algorithm>
using namespace std;
 
int n, all;
int cost[16][16];
int dp[16][1 << 16];
 
int func(int cur, int stat) {
    if (stat == all) {
        if (cost[cur][0] == 0)
            return 987654321;
        else
            return cost[cur][0];
    }
 
    int& ref = dp[cur][stat];
    if (ref != 0)
        return ref;
 
    int m = INT_MAX - 16000001;
    for (int i = 1; i < n; ++i) {
        if (((stat&(1 << i)) == 0) && (cost[cur][i] != 0))
            m = min(m, func(i, (stat | (1 << i))) + cost[cur][i]);
    }
 
    return ref = m;
}
 
int main() {
    scanf("%d", &n);
    all = (1 << n) - 1;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &cost[i][j]);
 
    printf("%d", func(0, 1));
    return 0;
}
