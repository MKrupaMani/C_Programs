#include <stdio.h>
int main()
{
     int s1, s2, s3, s4, s5, sum, total = 500;
     float percent;
     scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
     sum = s1 + s2 + s3 + s4 + s5;
     percent = (sum * 100) / total;
     printf("%f", percent);
}