#include <stdio.h>
int main()
{
     int n;
     scanf("%d", &n);
     int count = 0;
     int true = 1;
     int i = 0;
     while (true)
     {
          for (int j = count; j <= count + i; j++)
          {

               printf("%d ", j);
               if (j == n)
               {
                    true = 0;
                    break;
               }
          }
          count++;
          i++;
          printf("\n");
     }
}