#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n,i;
 scanf("%d",&n);
 long int *arr;
 arr= (long int *)malloc(sizeof(long int) * n);
for(; i<n; i++)scanf("%ld",&arr[i]);
int mx=arr[0], mn=arr[0], mx_cnt=0, mn_cnt=0;
for(i=1; i<n; i++)
 if(arr[i]>mx){
 mx = arr[i]; mx_cnt++;
 }
 else if(arr[i] < mn){
 mn = arr[i]; mn_cnt++;
 }
printf("%d %d",mx_cnt,mn_cnt);
return 0;
}
