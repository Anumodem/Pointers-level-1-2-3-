#include <stdio.h>
void decrypt(char *Str,int Start, int End)
{
 if (Start > End) {
 return;
 }
 int mid = (Start + End) >> 1;
 printf("%c",Str[mid]);
 decrypt(Str, mid + 1, End);
 decrypt(Str, Start, mid - 1);
}
 int main()
{
 int t;
 scanf("%d",&t);
 while(t--){
 int N;
 char nn[100] = "void confidential(int start,int end,char *str,char *new_str,int *index)";
 if(nn[0] == 'v')
 scanf("%d",&N);
 char Str[N];
 scanf("%s",Str);
 decrypt(Str, 0, N - 1);
 printf("\n");
 }
 return 0;}
