#include <stdio.h>
int main()
{
     char ch;
     scanf("%c", &ch);
     char first = 'A';
     int base = (int)first;
     int last = (int)ch;
     int n = last - base + 1;
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               printf("%c  ", 'A' + i);
          }
          printf("\n");
     }
}