//a C program to print find the area of a circle 
#include <stdio.h>
int main ()
{
    const int PI =3.142;
    int Radius =7;
    int area;
    area = PI * Radius * Radius;
    printf("area of a circle:%d",area);
    return 0;
}