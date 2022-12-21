#include <stdio.h>
#include <string.h>
#include <math.h>
#define ABHIJAY_DEBUG char a[] = {"q = (int*)calloc(n+1, sizeof(int));*q"};int x =strlen(a);x++;
int a,vis[300001];
int main()
{
    int n; int i;
    scanf("%d",&n);
    printf("%d", 1);
    int k=n;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        vis[a]=1;
        while(vis[k])
            k--;
        printf(" %d",i+k-n+1);}printf("\n");ABHIJAY_DEBUG return 0;}
