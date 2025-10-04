#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int INF = 0x3f3f3f3f;
int neg_max[10010], neg_min[10010], pos_max[10010], pos_min[10010], res[10010], A[10010];
void calMulMax(int A[], int res[], int n) {
    
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n ; i ++ )scanf("%d", &A[i]);
    calMulMax(A, res, n);
    for (int i = 1; i <= n; i ++ )printf("%d ", res[i]);
    return 0;
}