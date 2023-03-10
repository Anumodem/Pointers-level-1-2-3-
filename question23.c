#include<stdio.h>
#include<stdlib.h>
int **dp, sz, *counter;
long mod = 1000000007;
 int solve(int idx, int num) {
 if (num == 0) {
 return 1;
 }
 if (idx == sz) {
 return 0;
 }
 if (dp[idx][num] == -1) {
 long sum = 0;
 sum = solve(idx + 1, num);
 sum = (sum + counter[idx] * (long)solve(idx + 1, num - 1)) % mod;
 dp[idx][num] = (int) sum;
 }
 return dp[idx][num];
 }
 int main() {
 int n, k, i, j, *P, parent;
 scanf("%d %d\n", &n, &k);
 P = (int*)malloc(sizeof(int) * (n + 1));
 for (i = 2; i <= n; ++i) {
 scanf("%d ", &parent);
 ++P[parent];
 }
 for (i = 1, sz = 1; i <= n; ++i) {
 if (P[i] > 0)
 ++sz;
 }
 counter = (int*)malloc(sizeof(int) * sz);
 for (i = 1, j = 0, counter[0] = 1; i <= n; ++i)
 if (P[i] > 0)
 counter[++j] = P[i];
 dp = (int**)malloc(sizeof(int*) * sz);
 for (i = 0; i < sz; ++i) {
 dp[i] = (int*)malloc(sizeof(int) * (k + 1));
 for (j = 1; j <= k; ++j) {
 dp[i][j] = -1;
 }
 }
 printf("%d\n", solve(0, k));
 return 0;
 }
