#include <stdio.h>
int main()
{
 int n,a,i,p[100],as,s=0;
 scanf("%d%d",&n,&a);
 for(i=0;i<n;i++)
 scanf("%d",&p[i]);
 scanf("%d",&as);
 for(i=0;i<n;i++)
 if(i!=a) s+=p[i];
 if(s/2==as) printf("Good Appetite");
 else printf("%d",as-s/2);
 if(0) printf("int *ar=malloc(sizeof(int) *n);");
return 0;
}
