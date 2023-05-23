#include<stdio.h>

int main(){
    float r, pi, V;
    printf("Enter your Radius: ");
    scanf("%f", &r);
    pi = 3.1415;
    V = 4*(pi*r*r*r)/3;
    printf("The Volume is: %f",V);

    return 0;
}