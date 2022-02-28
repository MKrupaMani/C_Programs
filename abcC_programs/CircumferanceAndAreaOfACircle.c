#include <stdio.h>
int main()
{
     int radius;
     float area, circumference, pi = 3.14;
     printf("Enter radius : ");
     scanf("%d", &radius);
     area = pi * radius * radius;
     circumference = 2 * pi * radius;
     printf("Area : %f \ncircumference : %f", area, circumference);
}