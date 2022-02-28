#include <stdio.h>
int main()
{
     char ch;
     scanf("%c", &ch);
     char first = 'A';
     int base = (int)first;
     int last = (int)ch;

     int n;
     scanf("%d", &n);
     int count = 0;
     for (int i = 0; i <= n; i++)
     {
          for (int j = count; j <= count + i; j++)
          {
               printf("%d ", j);
          }
          count++;
          printf("\n");
     }
}