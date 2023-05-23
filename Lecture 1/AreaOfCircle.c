#include<stdio.h>

int main(){
    float Radius, Area;
    printf("Enter radius: ");
    scanf("%f", &Radius);
    Area = 3.14 * Radius * Radius;
    printf("Area of Circle is: %f", Area);


    return 0;
}