#include <stdio.h>
int main()
{
 if(0)printf("long long int *apm;");
 int a,b,n,i,p[100],s[100],t,f1;
 scanf("%d",&t);
 while(t--)
 {
 scanf("%d%d%d",&a,&b,&n);
 for(i=0;i<n;i++)
 scanf("%d",&p[i]);
 for(i=0;i<n;i++)
 scanf("%d",&s[i]);
 for(i=0;i<n;i++)
 {
 if(p[i]-a==0) {
 f1++;
 b=b-s[i];
 }
 }
 if(f1==n && b>=0) printf("YES\n");
 else printf("NO\n");
 }
return 0;
}
