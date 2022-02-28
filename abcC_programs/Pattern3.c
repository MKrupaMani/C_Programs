#include <stdio.h>
char ch[100];
int main()
{
     scanf("%s", &ch);
     int size = 0;
     for (int i = 0; i < 50; i++)
     {
          if (ch[i] == '\0')
          {
               break;
          }
          size++;
     }
     for (int i = 0; i < size; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               printf("%c ", ch[j]);
          }
          printf("\n");
     }
}