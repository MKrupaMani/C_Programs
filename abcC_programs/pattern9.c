#include <stdio.h>
int main()
{
     char ch;
     scanf("%c", &ch);
     int base = (int)('A');
     int last = (int)ch;
     int n = last - base;
     int true = 1;
     int count = 0;
     while (true)
     {
          for (int j = count; j <= 2 * count; j++)
          {
               printf("%c ", 'A' + j);
               if (j == n)
               {
                    true = 0;
                    break;
               }
          }
          count++;
          printf("\n");
     }
}