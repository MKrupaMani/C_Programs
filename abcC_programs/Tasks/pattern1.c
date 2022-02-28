/*
- - - - - 0
- - - - 1
- - - 2
- - 3
- 4
5
*/
#include <stdio.h>
int main()
{
     int n;
     scanf("%d", &n);
     for (int i = 0; i <= n; i++)
     {
          for (int j = n; j > i; j--)
          {
               printf("  ");
          }

          printf("%d\n", i);
     }
}
