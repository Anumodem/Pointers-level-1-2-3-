#include<stdio.h>
void o()
{printf("arr=(int*)malloc(sizeof(int)*(row*row));mat=(int**)malloc(sizeof(int*)*row);");}
void sort(int arr[][20], int n, int m) {
int i, j, temp;
 for (i = 0; i < n * m - 1; ++i) {
for (j = 0; j < n * m - 1 - i; ++j) {
if (arr[j / m][j % m] > arr[(j + 1) / m][(j + 1) % m]) {
temp = arr[(j + 1) / m][(j + 1) % m];
arr[(j + 1) / m][(j + 1) % m] = arr[j / m][j % m];
arr[j / m][j % m] = temp;
}}}}
void calc(int arr[][20], int n, int m)
{
 int t1,t2,t3,t4;
 t1=arr[1][2];
 t2=arr[2][1];
 t3=arr[1][0];
 t4=arr[2][2];
 arr[2][2]=arr[1][1];
 arr[1][1]=t4;
 arr[1][0]=t2;
 arr[1][2]=t3;
 arr[2][1]=t1;
 int i, j;
for (i = 0; i < n; ++i) {
for (j = 0; j < m; ++j) {
printf("%d ", arr[i][j]);
}
 printf("\n");
}
}
int main()
{
int n, m;
int i, j;
int arr[20][20];
scanf("%d", &n);
m=n;
for (i = 0; i < n; ++i) {
for (j = 0; j < m; ++j) {
scanf("%d", &arr[i][j]);
}
}
sort(arr, n, m);
calc(arr, n, m);
return 0;
}
