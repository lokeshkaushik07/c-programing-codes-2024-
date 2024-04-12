#include <stdio.h>
#include <math.h>

int main (){

    double radius = 0;
    printf("Enter radius: ");
    scanf("%lf",&radius);

    double result = (2 * M_PI * radius);
    printf("Circumference of circle is %.3lf",result);
    return 0;
}