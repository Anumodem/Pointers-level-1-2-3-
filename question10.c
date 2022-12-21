#include <stdio.h>

int calculateLength(char*);

int main() {

   char str[20];

   int length;

   scanf("%s",str);

   length = calculateLength(str);

   printf("%d",length);

   return 0;

}

int calculateLength(char* ch) {

       int count = 0;

   while (*ch!='\0') {

      count++;

      ch++;

   }

   return count;

}
