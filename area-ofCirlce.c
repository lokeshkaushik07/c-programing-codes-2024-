#include <stdio.h>
#include <math.h>

int main (){

    double radius;
    printf("Enter radius : ");
    scanf("%lf",&radius);

    double area = (M_PI * radius * radius);
    printf("Area of circle is %.3lf", area);
    return 0;
    
}
