#include <stdio.h>
#include <stdlib.h>
#define N 500000
 #define M (N * 2)
int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }
void match(char *aa,int *pp,int n,char *bb,int m) {
 static char cc[M + N];
 static int zz[M + N];
 int n_, i, l, r;
 n_ = m + n;
 for (i = 0; i < n_; i++)
 cc[i] = i < m ? bb[i] : aa[i - m];
 for (i = 1, l = r = 0; i <n_; i++)
 if (zz[i - l] < r - i)
 zz[i] = zz[i - l];
 else {
 l = i;
 r = max(r, l);
 while (r < n_ && cc[r] == cc[r - l])
 r++;
 zz[i] = r - l;
 }
 for (i = 0; i < n; i++)
 pp[i] = zz[m + i];
}
void update(int *ft, int i, int n, int x){
 while (i < n) {
 ft[i] += x;
 i |= i + 1;
 }
}
int query(int *ft, int i){
 int x = 0;
 while (i >= 0){
 x += ft[i];
 i &= i + 1, i--;
 }
 return x;
}
int pp[N], qq[N];
int compare1(const void *a, const void *b){
 int i = *(int *) a;
 int j = *(int *) b;
 return pp[j] - pp[i];
}
int compare2(const void *a, const void *b){
 int i = *(int *) a;
 int j = *(int *) b;
 return qq[i] - qq[j];
}
int main(){
 static char aa[N + 1], bb[N + 1], cc[M + 1];
 static int ii[N], jj[N], ft1[N], ft2[N];
 int n, m, g, h, i, j, p;
 long long ans, x;
 scanf("%d%d%s%s%s", &n, &m, aa, bb, cc);
 match(aa, pp, n, cc, m);
 for (i = 0, j = m - 1; i < j; i++, j--) {
 char tmp;
 tmp = cc[i], cc[i] = cc[j], cc[j] = tmp;
 }
 for (i = 0, j = n - 1; i < j; i++, j--) {
 char tmp;
 tmp = bb[i], bb[i] = bb[j], bb[j] = tmp;
 }
 match(bb, qq, n, cc, m);
 for (i = 0, j = n - 1; i < j; i++, j--) {
 int tmp;
 tmp = qq[i], qq[i] = qq[j], qq[j] = tmp;
 }
 for (g = 0; g < n; g++)
 ii[g] = g;
 qsort(ii, n, sizeof *ii, compare1);
 for (h = 0; h < n; h++)
 jj[h] = h;
 qsort(jj, n, sizeof *jj, compare2);
 ans = 0, x = 0;
 for (i = 0; i < n; i++)
 update(ft2, i, n, 1);
 for (p = m - 1, g = 0, h = 0; p >= 1; p--) {
 while (g < n && pp[ii[g]] >= p){
 update(ft1, ii[g], n, 1);
 x += query(ft2, min(ii[g] + m -2, n - 1)) - query(ft2, ii[g] - 1);
 g++;
 }
 while (h < n && qq[jj[h]] < m - p) {
 update(ft2, jj[h], n, -1);
 x -= query(ft1, jj[h]) - query(ft1, jj[h] - m + 1);
 h++;
 }
 ans += x;
 }
 printf("%lld\n",ans);
return 0;
}
