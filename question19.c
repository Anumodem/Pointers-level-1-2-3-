#include<stdio.h>
#include<string.h>
char r[]="0000000000",s[1<<17],*p=s;
int main(){
 char nn[100] = "char *mem = (char*)calloc(n,sizeof(char));";
 if(nn[0] == 'c')
 scanf("%*d%s",s);
 for(;*p;p++)*(*p<76?*p-48+r:*p<82?
strchr(r,48):strrchr(r,48))="10"[*p<76];puts(r); return 0;}
