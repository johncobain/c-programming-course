#include <stdio.h>

int main(){
    const double PI = 3.14159;
    double radius;
    double circumference, area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2* PI * radius;
    area = PI * radius*radius;

    printf("\nCircunference: %lf", circumference);
    printf("\nArea: %lf", area);

    return 0;
}