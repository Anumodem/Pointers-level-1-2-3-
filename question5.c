#include <stdio.h>
int main()
{
int *ptr;
int n,i,arr[20],arr2[20];
scanf("%d",&n);
ptr=&arr[0];
for(i=0;i<n;i++){
 scanf("%d",ptr);
 arr2[n-1-i]=*ptr;
 ptr++;
}
for(i=0;i<n;i++){
 printf("%d ",arr2[i]);
}
//printf("%d",arr[0]);
return 0;
}
