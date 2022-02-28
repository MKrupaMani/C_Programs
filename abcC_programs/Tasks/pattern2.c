/*
1 - - - 1
  2 - 2
    3
  4 - 4
5 - - - 5
*/

#include <stdio.h>
int main()
{
     int n;
     scanf("%d", &n);
     int i = 0;
     while (i <= n)
     {
          for (int j = 0; j < n; j++)
          {
               if (j == i || j == n - 1)
               {
                    printf("%d", i + 1);
               }
               else
               {
                    printf("  ");
               }
          }
          printf("\n");
          i++;
          n--;
     }
}