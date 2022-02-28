#include <stdio.h>
void main()
{
     char ch;
     int a = 10, b = 20;
     scanf("%c", &ch);
     switch (ch)
     {
     case '+':
          printf("%d", a + b);
          break;
     case '-':
          printf("%d", a - b);
          break;
     case '*':
          printf("%d", a * b);
          break;
     case '/':
          printf("%d", a / b);
          break;
     case '%':
          printf("%d", a % b);
     }
}