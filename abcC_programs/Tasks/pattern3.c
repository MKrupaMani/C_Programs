#include <stdio.h>
int main()
{
     int n;
     scanf("%d", &n);
     for (int i = 0; i < n; i++)
     {
          int j = i;
          if (j == 0 || j == n - 1)
          {
               for (j = 0; j < n; j++)
               {
                    printf("%d ", j);
               }
          }
          else
          {
               printf("\n");
          }
     }
}