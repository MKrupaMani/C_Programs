#include <stdio.h>
int rev = 0;
void reversing(int);
void reversing(int n)
{
     if (n == 0)
     {
          return;
     }
     rev = rev * 10 + (n % 10);
     reversing(n / 10);
}
int main()
{
     int n;
     scanf("%d", &n);
     reversing(n);
     printf("%d", rev);
}
