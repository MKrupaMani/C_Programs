#include <stdio.h>
int main()
{
     int n;
     scanf("%d", &n);
     for (int i = 0; i <= n; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               if (j == i)
               {
                    printf("%d", i);
                    break;
               }
               printf("- ");
          }
          printf("\n");
     }
}