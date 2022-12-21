#include <stdio.h>
#include <string.h>
int main()
{
char string[100];char rev[100];
char *sptr=string;
char *rptr=rev;
int i=-1;
scanf("%[^\n]%*c",string);
while(*sptr){
    sptr++;
    i++;
}
while(i>=0){
sptr--;
*rptr=*sptr;
rptr++;
i--;
}
*rptr='\0';
rptr=rev;
while(*rptr){
    *sptr=*rptr;
    sptr++;
    rptr++;
}
printf("%s",string);
return 0;}
