#include <stdio.h>
int main()
{
     int a, b, c;
     scanf("%d%d%d", &a, &b, &c);
     if (a > b && a > c)
     {
          printf("a : %d", a);
     }
     else if (b > c)
     {
          printf("b : %d", b);
     }
     else
     {
          printf("c : %d", c);
     }
}